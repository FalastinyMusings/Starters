//
// Created by Mohammad Hammad on 2019-03-01.
//
#include <iostream>
#include <vector>
#include "pancake.h"
using namespace std;


void runPancake(){
    vector<int> pancakes(10);
    int maxPerson = 0;
    int minPerson = 0;
    int maxPancakes = 0;
    int minPancakes = 0;

    for(unsigned int i = 0; i < 10; i++){
        cout << "Please enter the number of pancakes eaten by person ";
        cout << i << ": ";
        cin >> pancakes.at(i);
    }

    for(unsigned int i = 0; i < 10; i++){
        if (maxPancakes < pancakes.at(i)) {
            maxPerson = i;
            maxPancakes = pancakes.at(i);
        }
    }

    cout << "Person " << maxPerson << " ate the most pancakes at ";
    cout << maxPancakes << " pancakes!" << endl;
    pancakeSort();
}

void pancakeSort(){
    vector<int> sortedPancakes(10);


}