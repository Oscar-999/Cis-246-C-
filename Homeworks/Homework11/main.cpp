#include <iostream>

#include "ClassOne.h"
#include "ClassTwo.h"
#include "ClassThree.h"
#include "ClassFour.h"
#include "ClassFive.h"
#include "ClassSix.h"
#include "ClassSeven.h"

using namespace std;

int main() {
    //Instantiat classone
    ClassOne one("classone");
    ClassOne* ptr1 = &one;
    //Printstatements
    cout << "Size of ClassOne object using sizeof operator: " << sizeof(one) << " bytes\n";
    cout << "Size of ClassOne object using function: " << one.getObjectSize() << " bytes\n";
    cout << "Size of ClassOne pointer: " << sizeof(ptr1) << " bytes\n\n";

    ClassTwo two("classtwo",4.03);
    ClassTwo* ptr2 = &two;
    //Printstatements
    cout << "Size of ClassTwo object using sizeof operator: " << sizeof(two) << " bytes\n";
    cout << "Size of ClassTwo object using function: " << two.getObjectSize() << " bytes\n";
    cout << "Size of ClassTwo pointer: " << sizeof(ptr2) << " bytes\n\n";

    ClassThree three;
    ClassThree* ptr3 = &three;
    //Printstatements
    cout << "Size of ClassThree object using sizeof operator: " << sizeof(three) << " bytes\n";
    cout << "Size of ClassThree object using function: " << three.getObjectSize() << " bytes\n";
    cout << "Size of ClassThree pointer: " << sizeof(ptr3) << " bytes\n\n";

    ClassFour four;
    ClassFour* ptr4 = &four;
    //Printstatements
    cout << "Size of ClassFour object using sizeof operator: " << sizeof(four) << " bytes\n";
    cout << "Size of ClassFour object using function: " << four.getObjectSize() << " bytes\n";
    cout << "Size of ClassFour pointer: " << sizeof(ptr4) << " bytes\n\n";

    ClassFive five;
    ClassFive* ptr5 = &five;
    //Printstatements

    cout << "Size of ClassFive object using sizeof operator: " << sizeof(five) << " bytes\n";
    cout << "Size of ClassFive object using function: " << five.getObjectSize() << " bytes\n";
    cout << "Size of ClassFive pointer: " << sizeof(ptr5) << " bytes\n\n";

    ClassSix six;
    ClassSix* ptr6 = &six;
    //Printstatements
    cout << "Size of ClassSix object using sizeof operator: " << sizeof(six) << " bytes\n";
    cout << "Size of ClassSix object using function: " << six.getObjectSize() << " bytes\n";
    cout << "Size of ClassSix pointer: " << sizeof(ptr6) << " bytes\n\n";

    ClassSeven seven;
    ClassSeven* ptr7 = &seven;
    //Printstatements

    cout << "Size of ClassSeven object using sizeof operator: " << sizeof(seven) << " bytes\n";
    cout << "Size of ClassSeven object using function: " << seven.getObjectSize() << " bytes\n";
    cout << "Size of ClassSeven pointer: " << sizeof(ptr7) << " bytes\n\n";

    // Part 2 null pointer
    ClassOne* ptr = nullptr;
    cout << "Pointer after assigning nullptr: " << ptr << "\n";
    cout << "Size of pointer after assigning nullptr: " << sizeof(ptr) << " bytes\n\n";

    ptr = &one;
    cout << "Pointer after assigning address of object: " << ptr << "\n";
    cout << "Size of pointer after assigning address of object: " << sizeof(ptr) << " bytes\n";

    return 0;
}
