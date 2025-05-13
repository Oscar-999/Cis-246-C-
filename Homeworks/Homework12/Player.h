// Oscar Alcantar
//Description : Write a C++ application that creates player objects that could be used in a role-playing game. Each player object includes a class and a level. Print the players in a neatly formatted list

#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class Player {
    //data members
    private:
      string playerClass;
      int level;
    public:
      Player(string pClass = "Knight", int lvl= 0);

      //setters
      void setClass(string pClass);
      void setLevel(int lvl);

    string getClass() const;

    int getLevel() const;

    //getters
      string getClass();
      int getLevel();
};
#endif
