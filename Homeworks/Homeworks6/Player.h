#ifndef PLAYER_H
#define PLAYER_H
#include <string>
class Player {
private:
  int play; //a value of 1 means rock, 2 means paper, and 3 means scissors

public:
  // function to return play as a string
  std::string getPlayAsString() const{
    switch (play) {
      case 1: return "rock";
      case 2: return "paper";
      case 3: return "scissors";
      default: return "unknown";
    }
    }
  // function to set play using a string to int
  void setPlay(const std::string& move) {
    if (move == "rock") play = 1;
    else if (move == "paper") play = 2;
    else if (move == "scissors") play = 3;
  }
// overload function
  void setPlay(int move) {
    if (move == 1) play = 1;
    else if (move == 2) play = 2;
    else if (move == 3) play = 3;
  }




};

#endif