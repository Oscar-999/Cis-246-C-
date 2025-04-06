#include <iostream>
#include "07LabClass.h"

using namespace std;

void printSizeOfObject(LabClass);
void printSizeOfPointer(LabClass *);

int main()
{
	//	STEP 4 - Instantiate an object of the LabClass
	LabClass lc;

	//	STEP 5 - Create a pointer to the above object.
	LabClass * lcptr = &lc;



	/*	STEP 6 - Call printSizeOfObject with the object
				 as a parameter.
	*/
	printSizeOfObject(lc);


	cout << endl;

	/*	STEP 7 - Call printSizeOfPointer with the pointer
				 as a parameter.
	*/

printSizeOfPointer(lcptr);

}

void printSizeOfObject(LabClass lc)
{
	cout << "In printSizeOfObject:" << endl;

	/*	STEP 1 - Call the function in the LabClass object
				 parameter that computes the size. Display
				 the results with a label that indicates how
				 the value was determined.
	*/
	cout << "Using the get_size function" << lc.get_size() << endl;



	/*	STEP 2 - Use the sizeof operator to determine the size
				 of the parameter. Display the results with a
				 label that indicates how the value was determined.
	*/
	cout << "Using the sizeof func" << sizeof(lc) << endl;

}

void printSizeOfPointer(LabClass* lc)
{
	cout << "In printSizeOfPointer:" << endl;

	/*	STEP 3 - Use the sizeof operator to determine the size
				 of the parameter. Display the results with a
				 label that indicates how the value was determined.
	*/
	cout << "Using the sizeof func" << sizeof(lc) << endl;

}