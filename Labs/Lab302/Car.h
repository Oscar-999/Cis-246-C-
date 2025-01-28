#ifndef CAR_H
#define CAR_H
#include <string>
//Oscar Alcantar - Lab 302
//Car Class
using namespace std;

class Car {
private:
    int doors  = 0;
public:
    //Getter for the door
    int getDoors() const{
        return doors;
    };
    //Setter for the door
    void setDoors(int newDoors) {
        doors = newDoors;
    }
    //Func to get car type with a switch statement
    string getCarType() const {
        switch (doors) {
            case 0:
            case 1:
            case 2:
            return "sports car";
            default:
                return "sedan";

        }
    }

};

#endif //CAR_H
