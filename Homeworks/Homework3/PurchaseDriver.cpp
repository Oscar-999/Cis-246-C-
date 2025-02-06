// Oscar Alcantar
// Homework 3 - Driver
// Description: Driver program prompts user input and displays formatted output
#include <iostream>
#include <iomanip>
#include "Purchase.h"
using namespace std;

int main() {
    float price;
    char spiritWear;
    bool hasSpiritWear;

    //User input

    cout << "Enter the purchase Amount> ";
    cin >> price;

    cout << "Does this purchase include Spirit Wear (Y/N)> ";
    cin >> spiritWear;

    //Make it lowercase to handle chars
    spiritWear = tolower(spiritWear);

    if (spiritWear == 'y') {
        hasSpiritWear = true;
    } else if (spiritWear == 'n') {
        hasSpiritWear = false;
    } else {
        cout << "Please enter a valid Spirit Wear (Y/N)";
        return 1;
    }
    // Object Creation
    Purchase purchase(price, hasSpiritWear);

    cout << fixed << setprecision(2);
    cout << "Purchase amount      $ " << setw(4) << purchase.getPrice() << endl;
    cout << "Total purchase       $ " << setw(4) << purchase.getTotalPurchase() << endl;

    return 0;
}