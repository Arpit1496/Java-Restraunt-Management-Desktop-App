/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package foodplanetapp.Dao;

import PlanetFood.pojo.Product;
import foodplanetapp.DbConnection.util.DbConnection;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.HashMap;
import javax.swing.JOptionPane;

/**
 *
 * @author arpit
 */
public class ProductDao {
    
    public static HashMap<String,String> getAllCategoryId() throws SQLException
    {
        HashMap<String,String> categories=new HashMap();
        Connection conn=DbConnection.getConnection();
        Statement st= conn.createStatement();
        ResultSet rs=st.executeQuery("select * from Categories");
        while(rs.next())
        {
            categories.put(rs.getString(2), rs.getString(1));
        }
        return categories;
        
    }
    
    public static String getProductId() throws SQLException {
        
            int Id=100;
            Connection conn=DbConnection.getConnection();
            Statement st= conn.createStatement();
            ResultSet rs=st.executeQuery("select count(*) from products");
            if(rs.next())
            {
                Id+=rs.getInt(1);
            }
            return "P"+Id;
        
    }
    public static boolean addProduct(Product p) throws SQLException {
        
        Connection conn=DbConnection.getConnection();
        PreparedStatement ps= conn.prepareStatement("insert into products values(?,?,?,?,?)");
        ps.setString(1,p.getProductId());
        ps.setString(2, p.getCatId());
        ps.setString(3,p.getProdName());
        ps.setDouble(4, p.getProdPrice());
        ps.setString(5, p.getActive());
        int x= ps.executeUpdate();
        if(x==1)
            return true;
        else
            return false;
        
    }
    
    public static boolean removeProduct(Product p) throws SQLException {
        
        Connection conn=DbConnection.getConnection();
        PreparedStatement ps= conn.prepareStatement("update products set active='N' where product_Id=? and cat_Id=?");
        ps.setString(1,p.getProductId());
        ps.setString(2,p.getCatId());
        int x= ps.executeUpdate();
        if(x==1)
            return true;
        else
            return false;
        
    }
    
    public static ArrayList getAllProductId(String catId) throws SQLException
    {
        ArrayList<String> prodId=new ArrayList();
        Connection conn=DbConnection.getConnection();
        PreparedStatement st= conn.prepareStatement("select Product_id from Products where cat_id=?");
        st.setString(1,catId);
        ResultSet rs=st.executeQuery();
        while(rs.next())
        {
            prodId.add(rs.getString(1));
        }
        return prodId;
        
    }
    
    public static Product getProductDetails(Product p) throws SQLException
    {
        Connection conn=DbConnection.getConnection();
        PreparedStatement st= conn.prepareStatement("select * from Products where Product_id=?");
        st.setString(1,p.getProductId());
        ResultSet rs=st.executeQuery();
        if(rs.next())
        {
            p.setProdName(rs.getString("Prod_NAme"));
            p.setProdPrice(rs.getDouble("Prod_Price"));
            p.setActive(rs.getString("Active"));
        }
        else {
            JOptionPane.showMessageDialog(null,"Product Record Not Found.", "ERROR", 0);
            return null;
        }
        return p;
    }
    
    public static Product getProductDetailsName(Product p) throws SQLException
    {
        Connection conn=DbConnection.getConnection();
        PreparedStatement st= conn.prepareStatement("select * from Products where Prod_Name=?");
        st.setString(1,p.getProdName());
        ResultSet rs=st.executeQuery();
        if(rs.next())
        {
            p.setProductId(rs.getString(1));
            p.setProdPrice(rs.getDouble(4));
            p.setActive(rs.getString(5));
        }
        else {
            JOptionPane.showMessageDialog(null,"No Record Found.", "ERROR", 0);
            return null;
        }
        return p;
    }
    public static boolean editProduct(Product p) throws SQLException 
    {
        Connection conn=DbConnection.getConnection();
        PreparedStatement st= conn.prepareStatement("update Products set Active=?,Prod_Price=?,Prod_name=? where Product_id=?");
        st.setString(1, p.getActive());
        st.setDouble(2,p.getProdPrice());
        st.setString(3,p.getProdName());
        st.setString(4,p.getProductId());
        int x=st.executeUpdate();
        if(x==0)
            return false;
        else 
            return true;
        
    }
    
    public static ArrayList<Product> getAllProducts() throws SQLException
    {
        
        ArrayList<Product> prodList=new ArrayList();
        Connection conn=DbConnection.getConnection();
        Statement st=conn.createStatement();
        ResultSet rs=st.executeQuery("Select * from Products");
        while(rs.next())
        {
            Product p=new Product();
            p.setProductId(rs.getString("PRODUCT_ID"));
            p.setCatId(rs.getString("cat_id"));
            p.setProdName(rs.getString("Prod_name"));
            p.setProdPrice(Double.parseDouble(rs.getString("prod_price")));
            p.setActive(rs.getString("active"));
            prodList.add(p);
        }
        return prodList;
    }
    
    public static ArrayList<String> getAllActiveProductId(String catId) throws SQLException
    {
        ArrayList<String> prodId=new ArrayList();
        Connection conn=DbConnection.getConnection();
        PreparedStatement st= conn.prepareStatement("select Product_id from Products where cat_id=? and active='y'");
        st.setString(1,catId);
        ResultSet rs=st.executeQuery();
        while(rs.next())
        {
            prodId.add(rs.getString(1));
        }
        return prodId;
        
    }
    
}
