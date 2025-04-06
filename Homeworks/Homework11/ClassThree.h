#ifndef CLASSTHREE_H
#define CLASSTHREE_H

#include <array>
#include <string>
using namespace std;

class ClassThree {
  private:
    array<string, 10> dataArray;

  public:
    int getObjectSize() {
        return sizeof(dataArray);
    }
};

#endif
