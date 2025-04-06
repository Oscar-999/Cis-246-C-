#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car {
private:
    string make;
    int price;

public:
    Car () {
        make = "";
        price = 0;
    };
    Car (string make, int price) {
        this->make = make;
        this->price = price;
    }
    string getMake() const{
        return make;
    };
    int getPrice() const{
        return price;
    };
    void setMake(string carMake){
        make = carMake;
    };

};
#endif
