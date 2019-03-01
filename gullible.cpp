//
// Created by Mohammad Hammad on 2019-03-01.
//
#include <iostream>
#include "gullible.h"
using namespace std;

void runGullible(){
    int choice = -1;

    for(int i = 0; i < 10; i++){
        cout << "Please enter enter a number other than " << i << "."  <<endl;
        cin >> choice;

        if (choice == i){
            cout << "Hey! You weren't supposed to do that!";
            exit;
        }
    }
    cout << "Okay I give up, you're even more patient than I am!";


}
