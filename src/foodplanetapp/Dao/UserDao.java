/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package foodplanetapp.Dao;

import PlanetFood.pojo.User;
import foodplanetapp.DbConnection.util.DbConnection;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;

/**
 *
 * @author arpit
 */
public class UserDao {
    
    public static String validateUser(User user) throws SQLException
    {
        Connection conn=DbConnection.getConnection();
        PreparedStatement ps=conn.prepareStatement("Select username from users where userid=? and password=? and usertype=?");
        ps.setString(1, user.getUserid());
        ps.setString(2, user.getPassword());
        ps.setString(3,user.getUserType());
        ResultSet rs=ps.executeQuery();
        String username=null;
        if(rs.next())
        {
            username=rs.getString(1);
        }
       
        return username;
        
    }
    
     public static boolean createCashier(User user) throws SQLException
    {
        Connection conn=DbConnection.getConnection();
        PreparedStatement ps=conn.prepareStatement("Insert Into users values(?,?,?,?,?)");
        ps.setString(1, user.getUserid());
        ps.setString(2, user.getUserName());
        ps.setString(3,user.getPassword());
        ps.setString(4,user.getUserEmployeeId());
        ps.setString(5,user.getUserType());
        if(ps.executeUpdate()==1)
            return true;
        else
            return false;
    }
     public static boolean removeCashier(User user) throws SQLException
    {
        Connection conn=DbConnection.getConnection();
        PreparedStatement ps=conn.prepareStatement("delete from users where username=?");
        ps.setString(1, user.getUserName());
        if(ps.executeUpdate()==1)
            return true;
        else
            return false;
    }
     
      public static ArrayList<User> getAllCashiers() throws SQLException
    {
        Connection conn=DbConnection.getConnection();
        Statement ps=conn.createStatement();
        ResultSet rs=ps.executeQuery("select * from Users where USERTYPE='Cashier'");
        ArrayList<User> userList=new ArrayList<User>();
        while(rs.next())
        {
            User user=new User();
            user.setUserid(rs.getString("USERID"));
            user.setUserEmployeeId(rs.getString("EmpId"));
            user.setUserName(rs.getString("USERNAME"));
            user.setUserType(rs.getString("UserType"));
            userList.add(user);
        }
        return userList;
    }
      
      public static String getUserId(User user) throws SQLException
    {
        Connection conn=DbConnection.getConnection();
        PreparedStatement ps=conn.prepareStatement("Select userId from users where userName=? and usertype=?");
        ps.setString(1, user.getUserName());
        ps.setString(2,user.getUserType());
        ResultSet rs=ps.executeQuery();
        if(rs.next())
        {
            user.setUserid(rs.getString(1));
        }
        return user.getUserid();  
    
    }
}
