/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package foodplanetapp.Dao;

import PlanetFood.pojo.Orders;
import foodplanetapp.DbConnection.util.DbConnection;
import java.sql.Connection;
import java.sql.Date;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.text.SimpleDateFormat;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.ArrayList;

/**
 *
 * @author arpit
 */
public class OrdersDao {

    public static String generateOrderId() throws SQLException
    
    {
        Connection conn=DbConnection.getConnection();
        Statement st=conn.createStatement();
        ResultSet rs=st.executeQuery("Select max(Order_ID) from Orders");
        if(rs.next() && rs.getString(1)!=null)
            return "Ord"+(Integer.parseInt(rs.getString(1).substring(3))+1);
        else
            return "Ord101";
        
    }
    
    public static boolean placeOrder(Orders ordr) throws SQLException
    {
        Connection conn=DbConnection.getConnection();
        PreparedStatement ps=conn.prepareStatement("Insert into Orders values(?,?,?,?,?,?,?)");
        ps.setString(1,ordr.getOrderId());
        ps.setDate(2, Date.valueOf(ordr.getOrderDate()));
        ps.setDouble(3,ordr.getGST());
        ps.setDouble(4,ordr.getGSTAmount());
        ps.setDouble(5,ordr.getDiscount());
        ps.setDouble(6,ordr.getGrandTotal());
        ps.setString(7,ordr.getUserId());
        int x= ps.executeUpdate();
        if(x==1)
            return true;
        else return false;
    }
    
    public static ArrayList<Orders> getAllOrders() throws SQLException
    {
        Connection conn=DbConnection.getConnection();
        Statement st=conn.createStatement();
        ArrayList<Orders> orderList=new ArrayList();
        ResultSet rs=st.executeQuery("Select * from Orders");
        while(rs.next())
        {
            Orders obj=new Orders();
            obj.setOrderId(rs.getString("ORDER_ID"));
            Date d1=rs.getDate("ORDER_DATE");
            obj.setOrderDate(d1.toLocalDate());
            obj.setGST(rs.getDouble("GST"));
            obj.setGSTAmount(rs.getDouble("GST_AMOUNT"));
            obj.setDiscount(rs.getDouble("DISCOUNT"));
            obj.setGrandTotal(rs.getDouble("GRAND_TOTAL"));
            obj.setUserId(rs.getString("USERID"));
            orderList.add(obj);
        }
        return orderList;
    }
     public static ArrayList<Orders> getDatewiseOrders(String start,String end) throws SQLException
    {
        ArrayList<Orders> orderList=new ArrayList();
        Connection conn=DbConnection.getConnection();
        PreparedStatement ps=conn.prepareStatement("select * from orders where order_Date >=? and order_Date <=?");
        ps.setString(1, start);
        ps.setString(2,end);
        ResultSet rs=ps.executeQuery();
        while(rs.next())
        {
            Orders obj=new Orders();
            obj.setOrderId(rs.getString("Order_Id"));
            obj.setDiscount(rs.getDouble("Discount"));
            obj.setGST(rs.getDouble("gst"));
            obj.setGSTAmount(rs.getDouble("Gst_Amount"));
            obj.setGrandTotal(rs.getDouble("Grand_Total"));
            obj.setUserId(rs.getString("UserId"));
            obj.setOrderDate(rs.getDate("Order_Date").toLocalDate());
            orderList.add(obj);
        }
        return orderList;
    }
}
