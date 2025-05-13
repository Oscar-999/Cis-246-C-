#include "Electronics.h"
#include "Computer.h"
#include <iostream>
using namespace std;

int main()
{
	// Step 1 - Instantiate an object of the Electronics class.
	// The constructor requires a brand name.
	
	Electronics e{"Samsung"};
	// Step 2 - Replace "e" below with the name of the object 
	// from Step 1.
	cout << e.toString() << endl;
	
	// Step 3 - Instantiate an object of the Computer class.
	// The constructor requires a brand name and an
	// operating system.
	Computer c{"Acer", "Windows"};
	
	
	// Step 4 - Replace "c" below with the name of the object 
	// from Step 3.
	cout << c.toString() << endl;
}
