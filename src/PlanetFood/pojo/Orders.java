/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package PlanetFood.pojo;

import java.time.LocalDate;
import java.time.format.DateTimeFormatter;

/**
 *
 * @author arpit
 */
public class Orders {
    
   private String orderId;
   private LocalDate orderDate;
   private Double GST;
   private Double GSTAmount;
   private Double discount;
   private Double grandTotal;
   private String userId;
   
    public String getOrderId() {
        return orderId;
    }

    public void setOrderId(String orderId) {
        this.orderId = orderId;
    }

    public LocalDate getOrderDate() {
        return orderDate;
    }

    public void setOrderDate(LocalDate orderDate) {
        
        this.orderDate =orderDate;
    }

    public Double getGST() {
        return GST;
    }

    public void setGST(Double GST) {
        this.GST = GST;
    }

    public Double getGSTAmount() {
        return GSTAmount;
    }

    public void setGSTAmount(Double GSTAmount) {
        this.GSTAmount = GSTAmount;
    }

    public Double getDiscount() {
        return discount;
    }

    public void setDiscount(Double discount) {
        this.discount = discount;
    }

    public Double getGrandTotal() {
        return grandTotal;
    }

    public void setGrandTotal(Double grandTotal) {
        this.grandTotal = grandTotal;
    }

    public String getUserId() {
        return userId;
    }

    public void setUserId(String userId) {
        this.userId = userId;
    }
   
   
}
