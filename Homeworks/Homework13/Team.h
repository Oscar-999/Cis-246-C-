// Oscar Alcantar
//Description : Write a C++ application that creates player objects that could be used in a role-playing game. Each player object includes a class and a level. Print the players in a neatly formatted list

#ifndef TEAM_H
#define TEAM_H
#include <vector>
#include "Player.h"
class Team {
  private:
    vector<Player> players;//vector to store players
  public:
    Team() = default;

    //Changing the add operator functionality
    Team& operator+=(const Player& p);

    void print() const;

    //Extra credit change ++ operator add default player
    Team& operator++();

};


#endif