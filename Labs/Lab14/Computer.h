#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>

// STEP 1 - Complete the include statement for
//			the header file of the base class.
#include 

// STEP 2 - Complete the class statement that
//			indicates that the Computer class
//			is derived from the Electronics class.
class __________________ {
	private:
		std::string OS;
		
	public:
		std::string toString() const;
		Computer(std::string, std::string);
};
#endif
