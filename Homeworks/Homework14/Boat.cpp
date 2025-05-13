//Oscar Alcantar
//Homework14
//Description :Write a C++ application that demonstrates inheritance using information about boats. See the Week14 slides for the complete inheritance hierarchy

#include "Boat.h"
#include <sstream>
#include <iomanip>

using namespace std;
// 0.0f
Boat::Boat(float len) : length(len),speed(0.0) {

}

// Boat::Boat(float length) : length(length) {
//
// }

void Boat::setLength(float len) {
  this->length = len;
}
void Boat::setSpeed(float spd) {
  this->speed = spd;
}

float Boat::getLength() const {
  return length;
}
float Boat::getSpeed() const {
  return speed;
}

void Boat::accelerate() {
  //no def acceleration
}


std::string Boat::toString() const {
  std::stringstream os;
  //set precision to os object
  os << std::setprecision(2) << std::fixed;
  os << setw(10) << "Length: " << Boat::getLength() << setw(10) <<"Speed" <<getSpeed() << std::endl;

  //return the string using s stream
  return os.str();
}
