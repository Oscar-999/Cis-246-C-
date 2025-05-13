// Oscar Alcantar
//Description : Write a C++ application that creates player objects that could be used in a role-playing game. Each player object includes a class and a level. Print the players in a neatly formatted list
#include "Player.h"
//constructor
Player::Player(string pClass, int lvl) {
    playerClass = pClass;
    level = lvl;
};
//setters
void Player::setClass(string pClass) {
    playerClass = pClass;
}

void Player::setLevel(int lvl) {
    level = lvl;
}
//getters
string Player::getClass() const{
    return playerClass;
}
int Player::getLevel() const{
    return level;
}