// Boat.h
// Oscar Alcantar
// Homework14
// Description: Base class for boats

#ifndef BOAT_H
#define BOAT_H

#include <string>

class Boat {
protected:
    float length;
    float speed;

public:
    Boat();                    // Default constructor
    Boat(float length);        // Parameterized constructor

    void setLength(float length);
    void setSpeed(float spd);

    float getLength() const;
    float getSpeed() const;

    virtual void accelerate(); // Polymorphic function
    virtual auto toString() const -> std::string; // Virtual string representation
};

#endif // BOAT_H




