#ifndef CLASSONE_H
#define CLASSONE_H
#include <array>
#include <string>
using namespace std;
//Oscar Alcantar
//Homework 11: Write a program to calculate the sizes of different types of objects.
class ClassOne {
    //Data members
  private:
    string data;

  public:
    //Default Constructor and one arg constructor
    ClassOne() : data("") {}
    ClassOne(const string &str) : data(str) {}

    int getObjectSize() {
        return sizeof(data);
    }
};

#endif
