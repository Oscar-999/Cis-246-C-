/* 04 Lab 01 - Repetition
Create a loop that displays a menu.
The loop should display the menu until the user chooses to exit.
Before beginning this lab, consider this question:
How many times should a menu display?
Remember the parts of all loops:
1. LCV identified
2. LCV initialized
3. LCV tested
4. LCV updated
*/
#include <iostream>
using namespace std;
int
main (void)
{
    // Variable to store user choice.
    int user_choice;
    // STEP 1: The body of the loop appears below. Write the
    // loop statements around the body.
    // Beginning of loop body.
    do{
        //The output that should display in each iteration of the loop:
        cout << "1. Option 1" << endl << "2. Option 2" << endl << "3. Exit" <<
        endl;
        cout << "Your choice: ";
        // Reads the user's choice
        cin >> user_choice;
    } while (user_choice != 3);
    // End of loop body.
}
