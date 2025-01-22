#ifndef ROOM_H
#define ROOM_H

#include <string>

class Room {

public:
    Room(std::string roomType, int roomCapacity)
      : type{roomType}, size{roomCapacity} {}

    void setCapacity(int capacity) {
        size = capacity;
    }

    void setType(std::string roomType) {
        type = roomType;
    }

    std::string getType() const {
        return type;
    }

    int getCapacity () const {
        return size;
    }

private:
    std::string type;
    int size;


};



#endif //ROOM_H