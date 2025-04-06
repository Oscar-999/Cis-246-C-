#include <iostream>
// STEP 1 - add an include statement for the Lab 12 header file
#include "Lab12.h"
using namespace std;
int main()
{
    Lab12 lab;
    cout << "Type an integer: ";
    int theInt;
    cin >> theInt;
    lab.setValue(theInt);
    cout << "The integer value is: " << lab.getValue();
}
