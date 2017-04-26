//
// Created by dokgo on 27.04.17.
//

#include "Animals.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Animals::Animals() {
    animalType = "unknown type";
    animalName = "unknown name";
    animalAge = -1;
}

Animals::Animals(string animalType, string animalName, int animalAge) {
    this->animalType = animalType;
    this->animalName = animalName;
    this->animalAge = animalAge;
}

Animals::~Animals() {
    cout << animalAge << " years old " << animalType << " " << animalName << " now destroyed" << endl;
}

void Animals::move() {
    cout << animalAge << " years old " << animalType << " " << animalName << " is moving" << endl;
}

string Animals::say() {
    string speech(animalAge + " years old "+ animalType + " " + animalName + " greeting you!");
    cout << speech << endl;
    return speech;
}

Animals* Animals::makeChild() {
    Animals* ptr = 0;
    if (animalAge < 4) {
        cout << animalAge << " years old " << animalType << " " << animalName << " is too young, can't produce children" << endl;
    } else {
        ptr = new Animals(animalType, animalName + " child", 0);
    }
    return ptr;
}

void Animals::die() {
    cout << animalAge << " years old " << animalType << " " << animalName << " just died!" << endl;
    delete this;
    //this->~Animals();
}