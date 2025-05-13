//Oscar Alcantar
//Homework14
//Description :Write a C++ application that demonstrates inheritance using information about boats. See the Week14 slides for the complete inheritance hierarchy

#include "Boat.h"
#include <sstream>
#include <iomanip>

using namespace std;

Boat::Boat() : length(0.0f) {

}

Boat::Boat(float length) : length(length) {

}

void Boat::setLength(float len) {
    this->length = len;
}
float Boat::getLength() const {
    return this->length;
}

std::string Boat::toString() const {
    std::stringstream os;
    //set precision to os object
    os << std::setprecision(2) << std::fixed;
    os << setw(10) << "Length: " << Boat::getLength() << std::endl;

    //return the string using s stream
    return os.str();
}
