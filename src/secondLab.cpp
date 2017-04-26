//
// Created by dokgo on 26.04.17.
//

#include "Animals.h"

int main() {
    Animals *animal = new Animals("unknown", "animal1", 3);
    animal->say();
    animal->move();
    animal->move();
    Animals *animal2 = animal->makeChild();
    if (animal2 != 0){
        animal2->say();
        animal2->move();
        animal2->die();
    }

    animal->die();

    return 0;
}