#include "Electronics.h"
#include "Computer.h"
#include <array>  // This is new.
#include <iostream>
using namespace std;

// NOTE - STEP 1 is in the Electronics.h file.

int main()
{
	// STEP 2 - Using the <array> class, create 
	//			an array of Electronics pointers,
	//			of size 2.
	array<Electronics *, 2> inventory;

	Electronics e{"Samsung"};	// Same as last week.
	
	// STEP 3 - Add the address of the above
	//			Electronics object to index 0 of the array.
	inventory[0] = &e;
	
	// STEP 4 - Add a Computer object to the array, using
	//			the following syntax:
	//	arrayname[1] = new Computer{brand name, OS};
	inventory[1] = new Computer{"Ailenware", "Windows"};
	
	// STEP 5 - Create a loop that calls each element's
	//			toString function.
	for (int i = 0; i < 2; i++) {
		cout << inventory[i]->toString() << endl;
	}
	
}
