
#ifndef ROWBOAT_H
#define ROWBOAT_H

 #include "Boat.h"
class Rowboat : public Boat {
private:
    int oars;

public:
    Rowboat(float length, int oars);
    void setOars(int oars);
    int getOars() const;
    std::string toString() const ;
};



#endif //ROWBOAT_H
