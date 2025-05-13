#include "Computer.h"
#include <string>

// Library for ostringstream class
#include <sstream>

Computer::Computer(std::string brandName, std::string OSname) 
// STEP 1 - Call the base class constructor and pass the
//			brandName.
	: Electronics(brandName),
	  OS{OSname} {}
		
std::string Computer::toString() const
{
	
	//	STEP 2: Instantiate an object of the 
	//			std::ostringstream class.
	std::ostringstream os;
	
	
	//	STEP 3: Write one statement that "prints" the 
	//			following to the object created in STEP 1:
	//
	//			a) "print" the brand name by calling the
	//			   base class' toString function.
	//			b) "print" a space
	//			b) "print" the OS
	os << Electronics::toString() << " "<< "The operating system is " << OS<< std::endl;
	
	//	STEP 4: Return the str() function of the
	//			object created in STEP 1. Use this
	//			format:  return nameOfObject.str()
	return os.str();
}
