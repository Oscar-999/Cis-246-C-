// Oscar Alcantar
//Description : Write a C++ application that creates player objects that could be used in a role-playing game. Each player object includes a class and a level. Print the players in a neatly formatted list

#include "Team.h"
#include <iostream>
#include <iomanip>

using namespace std;

// += operator overload to add a player
Team& Team::operator+=(const Player& p) {
    players.push_back(p);
    //add to end of vector
    return *this;

}

// Print all players
void Team::print() const {
    int count = 1;
    for (const Player& p : players) {
      //Prints player with a numer var count than the level entered or will default 0
       cout << "Player " << count++ << ": "
     << setw(12) << left << p.getClass()
     << "Level: " << p.getLevel() << endl;
    }
}

// Prefix ++ operator overload to add a default player
Team& Team::operator++() {
    players.push_back(Player()); // adds default Player
    return *this;
}
