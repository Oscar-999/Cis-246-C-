#ifndef CLASSSEVEN_H
#define CLASSSEVEN_H

#include "ClassOne.h"

class ClassSeven {
  private:
    ClassOne objArray[100];

  public:
    int getObjectSize() {
        return sizeof(objArray);
    }
};

#endif
