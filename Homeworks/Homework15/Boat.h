#ifndef BOAT_H
#define BOAT_H
//Oscar Alcantar
//Homework14
//Description :Write a C++ application that demonstrates inheritance using information about boats. See the Week14 slides for the complete inheritance hierarchy
#include <string>

class Boat {
protected:
    float length;

public:
    //Default constructor
    Boat();
    //constructor
    Boat(float length);

    std::string toString() const;
    //Getter and Setters
    void setLength(float length);
    float getLength() const;
};



#endif //BOAT_H
