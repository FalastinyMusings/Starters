//
// Created by Mohammad Hammad on 2019-03-11.
//
#include <iostream>
#include "stringIn.h"
using namespace std;

void nameIn(string ifName, string ilName){
    string fullName = ifName + " " + ilName;
    cout << fullName << endl;
    replace(fullName);
    reverse(fullName);
}

void replace(string in){
    for(int i = 0; i < in.length(); i++){
        if (in.at(i) == 'a' || in.at(i) == 'e' || in.at(i) == 'i' || in.at(i) == 'o' || in.at(i) == 'u'){
            in.at(i) = 'z';
        }
        else if (in.at(i) == 'A' || in.at(i) == 'E' || in.at(i) == 'I' || in.at(i) == 'O' || in.at(i) == 'U'){
            in.at(i) = 'Z';
        }
    }
    cout << in << endl;
}

void reverse(string in){
    string rev;
    for(int i = 0; i < in.length(); i++){
        rev.push_back(in.at(in.length() - 1 - i));
    }
    cout << rev << endl;

}

void runName(){
    string first, last;

    cout << "Please enter your first name: ";
    cin >> first;
    cout << endl;
    cout << "Please enter your last name: ";
    cin >> last;
    cout << endl << endl;
    nameIn(first, last);
}