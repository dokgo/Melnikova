//
// Created by dokgo on 27.04.17.
//

#ifndef MELNIKOVA_ANIMALS_H
#define MELNIKOVA_ANIMALS_H

#include <string>

using std::string;

class Animals {
private:
    string animalType,
            animalName;
    int animalAge;
public:
    Animals();

    Animals(string animalType, string animalName, int animalAge);

    virtual ~Animals();

    virtual void move();

    virtual string say();

    virtual Animals* makeChild();

    virtual void die();

};


#endif //MELNIKOVA_ANIMALS_H
