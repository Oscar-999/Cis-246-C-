#include <iostream>
#include "Test.h"
using namespace std;

int main()
{
    Test test;
    test = test + 10;
    cout << test.getInt() << endl;

    Test test1;
    Test test2;

    // Change the values added to confirm the overloaded >
    // works in all cases.
    test1 = test1 + 15;
    test2 = test2 + 5;

    if (test1 > test2)
        cout << "Test1 greater";
    else
        cout << "Test2 greater";
}
