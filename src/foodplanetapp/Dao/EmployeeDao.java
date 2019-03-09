/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package foodplanetapp.Dao;

import PlanetFood.pojo.Employee;
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
public class EmployeeDao {
    
    public static int getEmpId() throws SQLException
    {
        Connection conn=DbConnection.getConnection();
        Statement st=conn.createStatement();
        ResultSet rs=st.executeQuery("Select max(EmpId) from Employees");
        if(rs.next())
            return Integer.parseInt(rs.getString(1).substring(1));
        else 
            return 0;
    }
    
    public static boolean addEmployee(Employee e) throws SQLException
    {
        Connection conn=DbConnection.getConnection();
        PreparedStatement ps=conn.prepareStatement("insert into Employees values(?,?,?,?)");
        ps.setString(1,e.setEmpId());
        ps.setString(2,e.getEmpname());
        ps.setString(3,e.getJob());
        ps.setDouble(4,e.getSal());
        int x=ps.executeUpdate();
        if(x==0)
            return false;
        else
            return true;
    }
    
    public static boolean searchEmployee(Employee e) throws SQLException
    {
        Connection conn=DbConnection.getConnection();
        PreparedStatement ps=conn.prepareStatement("Select * from Employees where EmpId=?");
        ps.setString(1,e.getEmpId());
        ResultSet rs=ps.executeQuery();
        if(rs.next())
        {
            e.setEmpname(rs.getString(2));
            e.setJob(rs.getString(3));
            e.setSal(Double.parseDouble(rs.getString(4)));
            return true;
        }
        else 
            return false;
        
    }
    
    public static boolean updateEmployee(Employee e) throws SQLException
    {
        Connection conn=DbConnection.getConnection();
        PreparedStatement ps=conn.prepareStatement("update Employees set ENAME=?,JOB=?,sal=? where EmpId=?");
        ps.setString(1,e.getEmpname());
        ps.setString(2, e.getJob());
        ps.setDouble(3, e.getSal());
        ps.setString(4,e.getEmpId());
        if(ps.executeUpdate()==1)
            return true;
        else
            return false;
        
    }
    
    public static ArrayList getAllEmpId() throws SQLException
    {
        Connection conn=DbConnection.getConnection();
        Statement st=conn.createStatement();
        ArrayList<String> idList=new ArrayList<>();
        ResultSet rs=st.executeQuery("Select EmpId from Employees");
        while(rs.next())
        {
            idList.add(rs.getString(1));
        }
        return idList;   
    }
    
    public static ArrayList<Employee> getAllEployees() throws SQLException
    {
        
        Connection conn=DbConnection.getConnection();
        Statement st=conn.createStatement();
        ArrayList<Employee> empList=new ArrayList<>();
        ResultSet rs=st.executeQuery("Select * from Employees");
        while(rs.next())
        {
            Employee e=new Employee();
            e.setEmpname(rs.getString(2));
            e.setJob(rs.getString(3));
            e.setSal(Double.parseDouble(rs.getString(4)));
            e.empId(rs.getString(1));
            empList.add(e);   
        }
        return empList;
        
    }
    
    public static boolean removeEmployee(Employee e) throws SQLException
    {
        Connection conn=DbConnection.getConnection();
        PreparedStatement ps=conn.prepareStatement("delete from Employees where EmpId=?");
        ps.setString(1, e.getEmpId());
        if(ps.executeUpdate()==1)
            return true;
        else 
            return false;
    }
    
     public static ArrayList<Employee> getAllEmployees() throws SQLException
    {
        
        ArrayList<Employee> empList=new ArrayList();
        Connection conn=DbConnection.getConnection();
        Statement st=conn.createStatement();
        ResultSet rs=st.executeQuery("Select * from Employees");
        while(rs.next())
        {
            Employee e=new Employee();
            e.setEmpname(rs.getString("ENAME"));
            e.setJob(rs.getString("Job"));
            e.setSal(Double.parseDouble(rs.getString("Sal")));
            e.empId(rs.getString("EMPID"));
            empList.add(e);
        }
        return empList;
    }

    public static ArrayList<Employee> getAllCashiers() throws SQLException
    {
        
        ArrayList<Employee> empList=new ArrayList();
        Connection conn=DbConnection.getConnection();
        Statement st=conn.createStatement();
        ResultSet rs=st.executeQuery("Select * from Employees where JOB='Cashier'");
        while(rs.next())
        {
            Employee e=new Employee();
            e.setEmpname(rs.getString("ENAME"));
            e.setJob(rs.getString("Job"));
            e.setSal(Double.parseDouble(rs.getString("Sal")));
            e.empId(rs.getString("EMPID"));
            empList.add(e);
        }
        return empList;
    }
    
    
}
