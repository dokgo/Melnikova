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
    cout << getAnimalAge() << " years old " << animalType << " " << animalName << " now destroyed" << endl;
}

string Animals::getAnimalType() {
    return animalType;
}

string Animals::getAnimalName() {
    return animalName;
}

int Animals::getAnimalAge() {
    return animalAge;
}

void Animals::move() {
    cout << getAnimalAge() << " years old " << getAnimalType() << " " << getAnimalName() << " is moving" << endl;
}

string Animals::say() {
    string speech(" years old "+ getAnimalType() + " " + getAnimalName() + " is greeting you!");
    cout << getAnimalAge() << speech << endl;
    return speech;
}

Animals* Animals::makeChild() {
    Animals* ptr = 0;
    if (getAnimalAge() < 3) {
        cout << getAnimalAge() << " years old " << getAnimalType() << " " << getAnimalName() << " is too young, can't produce children" << endl;
    } else {
        ptr = new Animals(getAnimalType(), getAnimalName() + " child", 0);
    }
    return ptr;
}

void Animals::die() {
    cout << getAnimalAge() << " years old " << getAnimalType() << " " << getAnimalName() << " just died!" << endl;
    delete this;
    //this->~Animals();
}

