#include "Rowboat.h"
#include <sstream>
#include <iomanip>
using namespace std;
// Here we add the oars field
Rowboat::Rowboat(float length, int oars) : Boat(length), oars(oars) {

}

void Rowboat::setOars(int oars) {
  this->oars = oars;
}

int Rowboat::getOars() const {
  return this->oars;
}
//ACCELERATION INCREASE
void Rowboat::accelerate() {
  float speed = 1.01f * getLength();
  setSpeed(speed);
}


std::string Rowboat::toString() const {
  std::stringstream ss;
  ss << std::fixed << std::setprecision(2);
  //Set widths for alignment
  ss << "Rowboat" << setw(11)<< getLength() << setw(11) << getSpeed() << setw(18) << getOars();;
  return ss.str();
}