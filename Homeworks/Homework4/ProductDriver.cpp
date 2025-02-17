// Oscar Alcantar
// Homework 4
// Description Write a C++ application that calculates total retail values for a series of sales
// transactions input by the user.

#include <iostream>
#include "Product.h"
#include <iomanip>

using namespace std;

int main() {
    Product product1(8.17), product2(5.45), product3(10.11),
            product4(18.48), product5(11.30);

    int productNumber, quantity;

    // 0 will equal false simple while loop runs until 0

    while (true) {
        //Prompts user for product number and quantity sold
        cout << "Product Number: ";
        cin >> productNumber;

        if (productNumber == 0) break;

        cout << "Quantity Sold: ";
        cin >> quantity;
        //Switch statement updating total sales
        switch (productNumber) {
            case 1: product1.updateTotalSales(quantity); break;
            case 2: product2.updateTotalSales(quantity); break;
            case 3: product3.updateTotalSales(quantity); break;
            case 4: product4.updateTotalSales(quantity); break;
            case 5: product5.updateTotalSales(quantity); break;
            default: cout << "Invalid product number. Try again.\n";
        }

    }
    // Display total sales
    cout << "\nTotal Sales\n===========\n";
    cout << fixed << setprecision(2);
    cout << "Product 1: $" << setw(10) << product1.getTotalSales() << endl;
    cout << "Product 2: $" << setw(10) << product2.getTotalSales() << endl;
    cout << "Product 3: $" << setw(10) << product3.getTotalSales() << endl;
    cout << "Product 4: $" << setw(10) << product4.getTotalSales() << endl;
    cout << "Product 5: $" << setw(10) << product5.getTotalSales() << endl;

    return 0;
}