#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Player.h"

//OScar Alcantar Homework 6
//Description: Write a C++ application that uses overloaded functions and random number generation to
// simulate a game of rock, paper, scissors between a player and the computer

//Prototype
void determineWinner(const Player& player, const Player& computer);

int main() {
    srand(time(0)); // Seed for random number generation using time func
    //2 Player objects
    Player player, computer;
    std::string playerMove;

    std::cout << "Welcome to Rock Paper Scissors\n";
    std::cout << "Type rock, paper, or scissors: ";
    std::cin >> playerMove;

    player.setPlay(playerMove);
    // Makes range 0-2 to 1-3
    computer.setPlay(rand() % 3 + 1);

    std::cout << "You played: " << player.getPlayAsString() << std::endl;
    std::cout << "Computer played: " << computer.getPlayAsString() << std::endl;

    determineWinner(player, computer);
    return 0;
}

void determineWinner(const Player& player, const Player& computer) {
    std::string playerMove = player.getPlayAsString();
    std::string computerMove = computer.getPlayAsString();
    //return string of the play

    if (playerMove == computerMove) {
        std::cout << "It's a tie\n";
        //If strings equal returns tie
    } else if
    //All ways a player will win
    ((playerMove == "rock" && computerMove == "scissors") ||
               (playerMove == "paper" && computerMove == "rock") ||
               (playerMove == "scissors" && computerMove == "paper")) {
        std::cout << "Player wins\n";
               } else {
                   //so if its not true that means computer won
                   std::cout << "Computer wins\n";
               }
}
