#include <iostream>
//Oscar Alcantar
//Homework14
//Description :Write a C++ application that demonstrates inheritance using information about boats. See the Week14 slides for the complete inheritance hierarchy
#include <iostream>
#include <cstdlib>
#include <ctime>>
#include "Rowboat.h"
#include "Yacht.h"
using namespace std;
int main() {
    //setting up rand with time for more accurate randomness
    srand(static_cast<unsigned int>(time(0)));

    std::cout << "Boat\t\tLength\t\tOars/Cabins" << std::endl;
    std::cout << "====\t\t======\t\t===========" << std::endl;

    for (int i = 0; i < 20; ++i) {
        //Length equation
        float length = i * 1.23f + 500;
        bool flip = rand() % 2; // Modulo 2 means it can only be 2 options essential 50 50

        if (flip) {
            //Current loop index + 20
            int cabins = i + 20;
            Yacht yacht(length, cabins);
            std::cout << yacht.toString() << std::endl;
        } else {
            //Current loop index + 1
            int oars = i + 1;
            Rowboat rowboat(length, oars);
            std::cout << rowboat.toString() << std::endl;
        }
    }

    return 0;

}