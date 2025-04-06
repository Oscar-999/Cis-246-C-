//Oscar Alcantar
//Homework 10
//Description :Write a C++ application to handle adding, deleting, and printing cars from a dealer inventory,using theC++ Standard Library class vectors.
#include <iomanip>
#include <iostream>
using namespace std;
#include "Car.h"


//Prototypes
void displayMenu();
bool addCar(vector<Car>& inventory);
bool removeCar(vector<Car>& inventory);
void displayCars(const vector<Car>& inventory);
int main() {
 vector<Car> inventory; // Vector Holds car Objects

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
bool addCar(vector<Car>&inventory) {
    string make;
    int price;
    cout << "Type of car: ";
    cin >> make;
    cout << "Price of car: ";
    cin >> price;
    //adds a car to the vector at end
    inventory.push_back(Car(make, price));
    return true;
}
//Function to delete car for inventory
bool removeCar(vector<Car>&inventory) {
    string make;
    cout << "Type of car to delete: ";
    cin >> make;

    for (size_t i = 0; i < inventory.size(); i++) {
        if (inventory[i].getMake().compare(make) == 0) {
            //comparing make
            //Erases the object at the specific index
            inventory.erase(inventory.begin() + i);
            return true;
        }
    }
    return false;
}
//Displays cars  using for range loop
void displayCars(const vector<Car>& inventory) {
    if (inventory.empty()) {
        cout << "Inventory is empty.\n";
        return;
    }

    cout << left << setw(10) << "Make" << setw(10) << "Price" << "\n";
    cout << "----      -----\n";

    for (const Car& car: inventory) {
        if (car.getMake().compare("") != 0) { // Will print valid cars only
            cout <<left << setw(10) << car.getMake() << setw(10) << car.getPrice() << "\n";
        }
    }
}