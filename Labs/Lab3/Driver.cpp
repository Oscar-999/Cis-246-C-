//Oscar Alcantar
// Selection - If else Lab3 - 01
#include <iostream>
#include "Car.h"
int main() {
    Car newCar; //Creates car instance

    int doors;
    //User prompt for door amnt
    std::cout << "Number of doors: ";
    std::cin >> doors;
    // sets user input to variable doors

    //Uses setter to update doors in the object
    newCar.setDoors(doors);

    //Prints out car type using the Car type method.
    std::cout << "This car is a " + newCar.getCarType() + "." << std::endl;

    return 0;
}
