#ifndef CLASSTWO_H
#define CLASSTWO_H

#include <string>
using namespace std;

class ClassTwo {
private:
    string data;
    double val;

public:
    ClassTwo(const string &str, double num) : data(str), val(num) {}

    int getObjectSize() {
        return sizeof(data) + sizeof(val);
    }
};

#endif
