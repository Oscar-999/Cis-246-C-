//Oscar Alcantar - Homework 1
// Program practices input and out in C++
#include <iostream>

int main() {
    // Variable Declarations
    int number1 = 0;
    int number2 = 0;
    int sum = 0;
    int product = 0;
    int difference = 0;

    // Ask for user input and sets it to the var num1
    std::cout << "Type in an integer: ";
    std::cin >> number1;
    // Ask for user input and sets it to the var num2
    std::cout << "Type in another integer: ";
    std::cin >> number2;

    //arithmetic operations
    sum = number1 + number2;
    difference = number1 - number2;
    product = number1 * number2;

    //empty line
    std::cout << std::endl;

    // Standard out printing each operation and its result
    std::cout << "The sum of these integer is " << sum << std::endl;
    std::cout << "The difference between these integers is " << difference << std::endl;
    std::cout << "The product of these integer is " << product << std::endl;



    return 0;
}