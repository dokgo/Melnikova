//
// Created by dokgo on 27.04.17.
//

#include <iostream>
#include "SeaAnimals.h"

using std::cout;
using std::cin;
using std::endl;

SeaAnimals::SeaAnimals() : Animals() {}

SeaAnimals::SeaAnimals(string animalType, string animalName, int animalAge)
        : Animals(animalType, animalName, animalAge) {}

SeaAnimals::~SeaAnimals() {}

void SeaAnimals::swim() {
    cout << getAnimalAge() << " years old " << getAnimalType() << " " << getAnimalName() << " is swimming " << endl;
}

void SeaAnimals::getCaught() {
    cout << getAnimalAge() << " years old " << getAnimalType() << " " << getAnimalName() << " was caught! " << endl;
    this->die();
}

void SeaAnimals::move() {
    this->swim();
}

string SeaAnimals::say() {
    Animals::say();
}

void SeaAnimals::die() {
    Animals::die();
}

SeaAnimals *SeaAnimals::makeChild() {
    return (SeaAnimals *) Animals::makeChild();
}

string SeaAnimals::getAnimalName() {
    return Animals::getAnimalName();
}

string SeaAnimals::getAnimalType() {
    return Animals::getAnimalType();
}

int SeaAnimals::getAnimalAge() {
    return Animals::getAnimalAge();
}