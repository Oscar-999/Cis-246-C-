#ifndef CLASSSIX_H
#define CLASSSIX_H

#include <array>
#include "ClassOne.h"

class ClassSix {
  private:
    //cpp array
    array<ClassOne, 100> objArray;

  public:
    int getObjectSize() {
        return sizeof(objArray);
    }
};

#endif
