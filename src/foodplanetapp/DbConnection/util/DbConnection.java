/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package foodplanetapp.DbConnection.util;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import javax.swing.JOptionPane;

/**
 *
 * @author arpit
 */
public class DbConnection {
       private static Connection conn;
       static
       {
        try
         {
         Class.forName("oracle.jdbc.OracleDriver");
         conn=DriverManager.getConnection("jdbc:oracle:thin:@//Arpit-S:1521/XE","arpit","arpit");
         if(conn==null)
         {
             JOptionPane.showMessageDialog(null,"Error loading driver","Error",JOptionPane.ERROR_MESSAGE);
         }
         }
        catch(ClassNotFoundException e)
         {
            JOptionPane.showMessageDialog(null,"Class Not Found","Error",JOptionPane.ERROR_MESSAGE);
            e.printStackTrace();
         }
        catch(SQLException e)
           {
               JOptionPane.showMessageDialog(null,"SQL Exception IN DbConnection Class","Error",JOptionPane.ERROR_MESSAGE);  
               e.printStackTrace();       
           }
        }
        public static Connection getConnection()
        {
            return conn;
        }
   
    
}
