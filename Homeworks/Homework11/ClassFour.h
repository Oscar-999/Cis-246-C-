#ifndef CLASSFOUR_H
#define CLASSFOUR_H

#include <string>
using namespace std;

class ClassFour {
  private:
    string dataArray[10];

  public:
    int getObjectSize() {
        return sizeof(dataArray);
    }
};

#endif
