#include "Electronics.h"
#include <string>

// Library for ostringstream class
#include <sstream>

Electronics::Electronics(std::string brandName) 
		: brand{brandName}{}
		
		
std::string Electronics::toString() const
{
	//	STEP 1: Instantiate an object of the 
	//			std::ostringstream class.		
	std::ostringstream os;
	
	//	STEP 2: Write a statement that "prints"
	//			the brand name to the object created
	//			in STEP 1.
	os << "The brand is " <<brand;
	
	//	STEP 3: Return the str() function of the
	//			object created in STEP 1. Use this
	//			format:  return nameOfObject.str()
	return os.str();
	
	}
