
#include <iostream>
using namespace std;
/*
This lab demonstrates using a recursive function to calculate the
result of a base raised to an exponent. Remember that this means
multiply the base by itself the number of times represented by the exponent.
For example:
2^3 means 2 raised to the 3rd power, which is 2 * 2 * 2 = 8.
So:
2^3 = 2^2 * 2^1, which is 4 * 2 = 8
2^2 = 2^1 * 2^1, which is 2 * 2 = 4
*/
/* The first int represents the base. The second int represents the exponent.*/
int recursive_multiply(int,int);
int main(void)
{
    int base;
    int exponent;
    cout << "Enter a number to be used as a base: ";
    cin >> base;
    cout << "Enter a number to be used as an exponent: ";
    cin >> exponent;
    cout << "Calculating " << base << " to the " << exponent << " power..." <<
    endl;
    // STEP 3: Complete the function call below, that calls recursive_multiply.
    int answer = recursive_multiply(base, exponent);
    cout << "Answer is " << answer << endl;
}
int recursive_multiply(int base, int exponent)
{
    /* STEP 1: Write the base case for this function, using selection.
    When a base is raised to the power of 1, the result
    is the base value. If this is true, return the base.
    */
    if (exponent == 1) return base;
    /* STEP 2: Write the recursive case for this function.
    If the exponent is not one, further calculations need to be
    performed. Call the recursive_multiply function, using a
    value that is one less than the exponent.
    Return the result of this call.
    */
    return base * recursive_multiply(base, exponent - 1 );
}
