#include <iostream>
#include "Room.h"
using namespace std;

int main() 
{
	
    // This instantiates a Room object using two
    Room room("Classroom", 25);
    
    
    room.setType("Classroom");
    cout << "This room is a " << room.getType() << endl;
    room.setCapacity(25);
    cout << "Its capacity is " << room.getCapacity() << " people." << endl;
    
}
