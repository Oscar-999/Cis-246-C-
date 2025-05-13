#include <iostream>

// Oscar Alcantar
//Description : Write a C++ application that creates player objects that could be used in a role-playing game. Each player object includes a class and a level. Print the players in a neatly formatted list

#include <iostream>
#include "Player.h"
using namespace std;

int main() {
    //variables
    string inputClass;
    int inputLevel;

    //P1 class and lvl
    cout << "Enter player 1 class: ";
    cin >> inputClass;
    cout << "Enter player 1 level: ";
    cin >> inputLevel;
    Player player1(inputClass, inputLevel);

    //P2 class
    cout << "\nEnter player 2 class: ";
    cin >> inputClass;
    Player player2(inputClass);

    //P3
    Player player3;

    //Displays
    cout << "\nYour team:\n";
    cout << "Player 1: " << player1.getClass() << " Level: " << player1.getLevel() << endl;
    cout << "Player 2: " << player2.getClass() << " Level: " << player2.getLevel() << endl;
    cout << "Player 3: " << player3.getClass() << " Level: " << player3.getLevel() << endl;


    return 0;
}