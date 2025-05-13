#include <fstream>
#include <iomanip>
#include <array>
//Oscar Alcantar
//Homework14
//Description :Write a C++ application that demonstrates inheritance using information about boats. See the Week14 slides for the complete inheritance hierarchy
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Rowboat.h"
#include "Yacht.h"
using namespace std;
int main() {

    //setup array
    const int SIZE = 20;
    array<Boat*,SIZE> harbor;

    ifstream inputFile("16DataFile.txt");

    if (!inputFile) {
        cerr << "Error opening input file.\n" << endl;
        return 1;
    }

    string type;
    float length;
    float speed;
    int other;


    std::cout << "Original Lists:\n";
    std::cout << "Boat\t\tLength\t\tSpeed\t\tOars/Cabins" << std::endl;
    std::cout << "====\t\t======\t\t=====\t\t===========" << std::endl;

    for (int i = 0; i < SIZE; ++i) {
        inputFile >> type >> length >> speed >> other;

        if (type == "Yacht") {
            harbor[i] = new Yacht(length, other);
        } else if (type == "Rowboat") {
            harbor[i] = new Rowboat(length, other);
        } else {
            cerr << "Invalid type!" << endl;
            return 1;
        }


        cout <<  harbor[i]->toString() << endl;



    }
    inputFile.close();
    ofstream outputFile("16DataFileOutput.txt");

    //Loop 2

    std::cout << "\nUpdated Lists:\n";
    std::cout << "Boat\t\tLength\t\tSpeed\t\tOars/Cabins" << std::endl;
    std::cout << "====\t\t======\t\t=====\t\t===========" << std::endl;

    for (int i = 0; i < SIZE; ++i) {
        harbor[i]->accelerate();
        cout << harbor[i]->toString() << endl;
        // saving to output
        outputFile << harbor[i]->toString() << endl;

    }

    for (int i = 0; i < SIZE; ++i) {
        delete harbor[i];
    }
    outputFile.close();

    return 0;

}