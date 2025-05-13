
#include "Yacht.h"
#include <sstream>
#include <iomanip>
using namespace std;
Yacht::Yacht(float length, int cabins) : Boat(length), cabins(cabins) {

}

void Yacht::setCabins(int cabins) {
  this->cabins = cabins;
}

int Yacht::getCabins() const {
  return cabins;
}
void Yacht::accelerate() {
  float speed = 5.8f* getLength();
  setSpeed(speed);
}


std::string Yacht::toString() const {
  std::stringstream ss;
  //set precision for length
  ss << std::fixed << std::setprecision(2);

  //Add withs so text alighnment
  ss << "Yacht" << setw(13) << getLength() << setw(11) << getSpeed() << setw(18) << getCabins();
  return ss.str();
}