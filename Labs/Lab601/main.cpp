
#include <iostream>
#include <string>
using namespace std;
/* This lab demonstrates overloaded functions. */
/*STEP 1: Write the function prototypes for two functions.
Both functions are called print_data.
One uses a single integer as a parameter.
The other uses a single string as a parameter.
Both use void as the return value.
*/

void print_data(int);
void print_data(string);
int
main(void)
{
    int num;
    string name;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter a name: ";
    cin >> name;
    // STEP 4: Write the function call to print the number entered by the user:
    print_data(num);
    // STEP 5: Write the function call to print the string entered by the user:
    print_data(name);
}
/*STEP 2: Complete the function header for the print_data function
that uses one integer parameter.
Refer to the statement in the function body for the correct
name for this parameter.
*/
void print_data(int data)
{
    cout << "The data is " << data << endl;
}
/*STEP 3: Complete the function header for the print_data function
that uses one string parameter.
Refer to the statement in the function body for the correct
name for this parameter.
*/
void print_data(string data)
{
    cout << "The data is " << data << endl;
}
