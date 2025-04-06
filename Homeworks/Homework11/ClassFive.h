#ifndef CLASSFIVE_H
#define CLASSFIVE_H

#include "ClassOne.h"

class ClassFive {
  private:
    ClassOne obj;

  public:
    int getObjectSize() {
        return obj.getObjectSize();
    }
};

#endif
