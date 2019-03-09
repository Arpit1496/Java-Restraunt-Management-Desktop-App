/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package foodplanetapp.Dao;

import PlanetFood.pojo.Categories;
import foodplanetapp.DbConnection.util.DbConnection;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.HashMap;

/**
 *
 * @author arpit
 */
public class CategoriesDao {
    
    public static HashMap<String,String> getAllCategoryId() throws SQLException
    {
        HashMap<String,String> categories=new HashMap();
        Connection conn=DbConnection.getConnection();
        Statement st= conn.createStatement();
        ResultSet rs=st.executeQuery("select * from Categories");
        while(rs.next())
        {
            categories.put(rs.getString(1), rs.getString(2));
        }
        return categories;
        
    }
    
    public static String setCategoryId() throws SQLException
    {
             int Id=100;
            Connection conn=DbConnection.getConnection();
            Statement st= conn.createStatement();
            ResultSet rs=st.executeQuery("select count(*) from Categories");
            if(rs.next())
            {
                Id+=rs.getInt(1);
            }
            return "C"+Id;   
    }
    
    public static boolean addCategory(Categories c) throws SQLException
    {
            Connection conn=DbConnection.getConnection();
            PreparedStatement st= conn.prepareStatement("insert into categories values(?,?)");
            st.setString(1,c.getCat_Id());
            st.setString(2,c.getCatName());
            int x =st.executeUpdate();
            if(x==0)
                return false;
            else
                return true;
            
    }
    
    public static boolean editCategory(Categories c) throws SQLException
    {
         Connection conn=DbConnection.getConnection();
         PreparedStatement st= conn.prepareStatement("update categories set Cat_Name=? where cat_id=?");
         st.setString(1, c.getCatName());
         st.setString(2,c.getCat_Id());
         if(st.executeUpdate()!=0)
             return true;
         else 
             return false;
            
    }
}
