//Oscar Alcantar
//Homework 7
//Description :Write a C++ application to handle adding, deleting, and printing cars from a dealer inventory,using theC++ Standard Library class template array.
#include <iomanip>
#include <iostream>
using namespace std;
#include "Car.h"


//Prototypes
void displayMenu();
bool addCar(array<Car, 10>& inventory);
bool removeCar(array<Car, 10>& inventory);
void displayCars(const array<Car, 10>& inventory);
int main() {
 array<Car,10> inventory; // Holds car Objects
int choice;
    cout << "Welcome to JJc Car Dealership Inventory Program" << endl << endl;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                if (addCar(inventory)) cout << "Car added\n";
                else cout << "Car not added\n";
            break;
            case 2:
                if (removeCar(inventory)) cout << "Car deleted\n";
                else cout << "No such car in inventory\n";
            break;
            case 3:
                displayCars(inventory);
                break;
            case 4:
                break;
            default:
                cout << "Invalid choice\n";

        }
    }while (choice != 4);

    return 0;
}

void displayMenu() {
    cout << "\n1. Add a car to inventory\n" << "2. Delete a car from inventory\n" << "3.Print Inventory\n" << "4.Exit\n\n" << "Your choice: ";
}
//function to add a car to inventory
bool addCar(array<Car,10>&inventory) {
    string make;
    int price;
    cout << "Type of car: ";
    cin >> make;
    cout << "Price of car: ";
    cin >> price;

    for (Car& car: inventory) {
        //Checks for empty slot
        if (car.getMake().compare("") == 0) {
            car = Car(make, price);
            return true;
        }
    }
    return false;
}
//Function to delete car for inventory
bool removeCar(array<Car,10>&inventory) {
    string make;
    cout << "Type of car to delete: ";
    cin >> make;

    for (Car& car: inventory) {
        // find the match
        if (car.getMake().compare(make) == 0) {
            car.setMake(""); // Reset make
            return true;
        }
    }
    return false;
}
//Displays cars  using for range loop
void displayCars(const array<Car,10>& inventory) {
    cout << left << setw(10) << "Make" << setw(10) << "Price" << "\n";
    cout << "----      -----\n";

    for (const Car& car: inventory) {
        if (car.getMake().compare("") != 0) { // Will print valid cars only
            cout <<left << setw(10) << car.getMake() << setw(10) << car.getPrice() << "\n";
        }
    }
}