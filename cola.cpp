//
// Created by Mohammad Hammad on 2019-03-01.
//
#include <iostream>
#include <string>
#include "cola.h"
using namespace std;


void colaMachine(){
    int choice;

    cout << "What beverage would you like? " << endl;
    cout << "1: Cola" << endl;
    cout << "2: Sprite" << endl;
    cout << "3: Iced Coffee" << endl;
    cout << "4: Chocolate Milk" << endl;
    cout << "5: Water" << endl;
    cin >> choice;
    colaDispense(choice);

}

void colaDispense(int choice){
    string beverage;


    switch(choice) {
        case 1:
            beverage = "Cola";
            break;
        case 2:
            beverage = "Sprite";
            break;
        case 3:
            beverage = "Iced Coffee";
            break;
        case 4:
            beverage = "Chocolate Milk";
            break;
        case 5:
            beverage = "Water";
            break;
        default:beverage = "";
    }
    if (beverage.empty()){
        cout << "Invalid selection, here is your money back!" << endl;
    }
    else {
        cout << "Here is your " << beverage << "!" << endl;
    }
}
