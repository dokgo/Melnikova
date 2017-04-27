//
// Created by dokgo on 27.04.17.
//

#ifndef MELNIKOVA_SEAFISH_H
#define MELNIKOVA_SEAFISH_H


#include "Animals.h"

class SeaAnimals : public Animals {
public:
    SeaAnimals();
    SeaAnimals(string animalType, string animalName, int animalAge);

    virtual ~SeaAnimals();

    virtual void move();

    virtual string say();

    virtual SeaAnimals* makeChild();

    virtual void die();

    virtual string getAnimalName();

    virtual string getAnimalType();

    virtual int getAnimalAge();

    virtual void swim();

    virtual void getCaught();
};


#endif //MELNIKOVA_SEAFISH_H
