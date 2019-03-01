#include <iostream>
#include "grade.h"
using namespace std;

string grade(int input){
    string output;

    switch(input) {
        case 100:
            output = "n A+";
            break;
        case 90 ... 99:
            output = "n A";
            break;
        case 80 ... 89:
            output = " B";
            break;
        case 70 ... 79:
            output = " C";
            break;
        case 60 ... 69:
            output = " D";
            break;
        case 0 ... 59:
            output = "n F";
            break;
        default:break;
    }

    return output;

}

void getScore(){
    int score;

    cout << "Please enter your score: ";
    cin >> score;
    cout << endl << "You scored a" << grade(score) << "." << endl << endl;

}

void runGrade(){

    getScore();
    anotherGrade();

}

void anotherGrade(){
    int ans;

    cout << "Would you like to check another score? (enter 1 or 0) " << endl;
    cin >> ans;
    if (ans == 1){
        runGrade();
    }
}