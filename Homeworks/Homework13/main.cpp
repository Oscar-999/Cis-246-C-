#include <iostream>

// Oscar Alcantar
//Description : Write a C++ application that creates player objects that could be used in a role-playing game. Each player object includes a class and a level. Print the players in a neatly formatted list

#include <iostream>
#include "Player.h"
#include "Team.h"
using namespace std;

int main() {
    //variables
    string inputClass;
    int inputLevel;

    Team team;

    //P1 class and lvl
    cout << "Enter player 1 class: ";
    cin >> inputClass;
    cout << "Enter player 1 level: ";
    cin >> inputLevel;
    Player player1(inputClass, inputLevel);
    team+=player1;

    //P2 class
    cout << "\nEnter player 2 class: ";
    cin >> inputClass;
    Player player2(inputClass);
    team+=player2;

    //P3
    Player player3;
    team+=player3;

    //Extra credit using ++
    ++team;

    //Displays
    cout << "\nYour team:\n";
    team.print();

    return 0;
}