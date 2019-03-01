#include <iostream>
#include "grade.h"
#include "cola.h"
#include "gullible.h"
#include "pancake.h"

int main() {

    int menuChoice = -1;

    while (menuChoice) {
        cout << endl << endl << "Please select a program to run: " << endl;
        cout << "1: Grading" << endl;
        cout << "2: Cola Machine" << endl;
        cout << "3: Gullible Game" << endl;
        cout << "4: Pancake Sort" << endl;
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
            case 69:
                cout << "( ͡° ͜ʖ ͡°)" << endl;
                break;
            default:
                break;
        }
    }
    return 0;
}