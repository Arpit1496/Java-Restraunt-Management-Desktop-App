/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package foodplanetapp.Dao;

import PlanetFood.pojo.Orders_Details;
import foodplanetapp.DbConnection.util.DbConnection;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;

/**
 *
 * @author arpit
 */
public class OrdersDetailsDao {
    
    public static boolean addOrderDetails(ArrayList<Orders_Details> itemList) throws SQLException
    {
        Connection conn=DbConnection.getConnection();
        for(Orders_Details obj : itemList)
        {
        PreparedStatement ps=conn.prepareStatement("insert into orders_details values(?,?,?,?)");
        ps.setString(1,obj.getOrderId());
        ps.setString(2,obj.getProductId());
        ps.setDouble(4,obj.getCost());
        ps.setDouble(3,obj.getQuantity());
        if(ps.executeUpdate()!=1)
            return false; 
        }
        return true;
    }
    
    public static ArrayList<Orders_Details> getOrderById(String orderId) throws SQLException
    {
        Connection conn=DbConnection.getConnection();
        PreparedStatement ps=conn.prepareStatement("select * from orders_details where OrderId=?");
        ps.setString(1,orderId);
        ResultSet rs=ps.executeQuery();
        ArrayList<Orders_Details> itemList=new ArrayList();
        while(rs.next())
        {
            Orders_Details obj=new Orders_Details();
            obj.setProductId(rs.getString("ProductId"));
            obj.setCost(rs.getDouble("cost"));
            obj.setQuantity(rs.getInt("quantity"));
            itemList.add(obj);
        }
        return itemList;
    }
    
   
}
