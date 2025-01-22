//Oscar Alcantar - Lab2
// This program works with classes and instances a Room object
#include <iostream>
#include "Room.h"
using namespace std;

int main()
{

    // This instantiates a Room object using two
    Room room("Classroom", 40);


    room.setType("Classroom");
    cout << "This room is a " << room.getType() << endl;
    room.setCapacity(100);
    cout << "Its capacity is " << room.getCapacity() << " people." << endl;

}