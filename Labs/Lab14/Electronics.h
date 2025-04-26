#ifndef ELECTRONICS_H
#define ELECTRONICS_H

#include <string>

class Electronics {
	private:
		std::string brand;
	public:
		std::string toString() const;
		explicit Electronics(std::string);
};
#endif
