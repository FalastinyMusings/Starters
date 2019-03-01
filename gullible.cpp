//
// Created by Mohammad Hammad on 2019-03-01.
//
#include <iostream>
#include "gullible.h"
using namespace std;

void runGullible(){
    int choice = -1;

    for(int i = 0; i < 11; i++){

        if (i == 10){
            cout << "Okay I give up, you're even more patient than I am!" << endl << endl;
            break;
        }

        cout << "Please enter enter a number other than " << i << "."  << endl;
        cin >> choice;
        if (cin.fail()){
            cout << "ERROR!";
            cin.clear();
            cin >> choice;
        }

        if (choice == i){
            cout << "Hey! You weren't supposed to do that!" << endl << endl;
            break;
        }
    }
}
