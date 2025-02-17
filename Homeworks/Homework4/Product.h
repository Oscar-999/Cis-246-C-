// Oscar Alcantar
// Homework 4 - Product class

#ifndef PRODUCT_H
#define PRODUCT_H

class Product {
  private:
    double price;
    double total_sales{0.0};
   public:
     Product(double price): price(price) {}

//Getter and setters
     double getPrice() const {return price;}
     double getTotalSales() const {return total_sales;}
     void setTotalSales(double total_saless) {total_sales = total_saless;}
     void setPrice(double p) {price = p;}
    //Update Total sales func
    void updateTotalSales(int quantity) {
                setTotalSales(getTotalSales() + (quantity * getPrice()));
}
};

#endif //PRODUCT_H
