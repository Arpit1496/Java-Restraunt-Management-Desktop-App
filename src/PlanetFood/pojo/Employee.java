/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package PlanetFood.pojo;

import foodplanetapp.Dao.EmployeeDao;
import java.sql.SQLException;
import javax.swing.JOptionPane;

/**
 *
 * @author arpit
 */
public class Employee {
    
    private String empId;
    private String empname;
    private String job;
    private Double sal;
    
    public static String setEmpId() {
        int id=0;
        try
        {
        id=EmployeeDao.getEmpId();
        }
        catch(SQLException ex)
        {
            ex.printStackTrace();
            JOptionPane.showMessageDialog(null,"Employee Id generation Failed.Try Again.","Error",JOptionPane.ERROR_MESSAGE);
        }
        id++;
        return "E"+id;    
    }

    public String getEmpname() {
        return empname;
    }

    public void setEmpname(String empname) {
        this.empname = empname;
    }

    public String getJob() {
        return job;
    }

    public void setJob(String job) {
        this.job = job;
    }

    public Double getSal() {
        return sal;
    }

    public void setSal(Double sal) {
        this.sal = sal;
    }

    public String getEmpId()
    {
        return empId;
    }
    
    public void empId(String id)
    {
        this.empId=id;
    }

    @Override
    public String toString() {
        return "Employee{" + "empname=" + empname + ", job=" + job + ", sal=" + sal + '}';
    }
    
    
    
}
