#include <iostream>
#include "grade.h"
#include "cola.h"
#include "gullible.h"
#include "pancake.h"
#include "stringIn.h"
//#include "TicTacToe.h"

int main() {

    int menuChoice = -1;

    while (menuChoice) {
        cout << endl << endl << "Please select a program to run: " << endl;
        cout << "1: Grading" << endl;
        cout << "2: Cola Machine" << endl;
        cout << "3: Gullible Game" << endl;
        cout << "4: Pancake Sort" << endl;
        cout << "5: Bracketing Search (WIP)" << endl;
        cout << "6: Tic Tac Toe (WIP)" << endl;
        cout << "7: Strings Aren't Friends" << endl;
        cout << "0: Exit" << endl;
        cin >> menuChoice;

        switch (menuChoice) {
            case 1:
                runGrade();
                break;
            case 2:
                colaMachine();
                break;
            case 3:
                runGullible();
                break;
            case 4:
                runPancake();
                break;
            case 5:
                cout << "Invalid" << endl;
                break;
            case 6:
                //runGame();
                break;
            case 7:
                runName();
                break;
            case 69:
                cout << "( ͡° ͜ʖ ͡°)" << endl;
                break;
            default:
                break;
        }
    }
    return 0;
}