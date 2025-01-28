#ifndef CAR_H
#define CAR_H
#include <string>
//Oscar Alcantar
//Car Class
using namespace std;

class Car {
private:
    int doors = 0;
public:
    //Getter for the door
    int getDoors() const{
        return doors;
    };
    //Setter for the door
    void setDoors(int newDoors) {
        doors = newDoors;
    }
    //Func to get car type
    string getCarType() const {
        if (doors <= 2) {
            return "sports car";
        } else {
            return "sedan";
        }
    }

};

#endif //CAR_H
