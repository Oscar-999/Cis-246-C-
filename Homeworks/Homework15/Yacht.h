
#ifndef YACHT_H
#define YACHT_H

#include "Boat.h"

class Yacht : public Boat {
private:
    //add cabin field
    int cabins;
public:
    Yacht(float length, int cabins);
    void setCabins(int cabins);
    int getCabins() const;
    std::string toString() const;
};

#endif //YACHT_H
