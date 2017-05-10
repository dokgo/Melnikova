//
// Created by dokgo on 26.04.17.
//

#include <vector>
#include "Animals.h"
#include "SeaAnimals.h"

using std::vector;

int main() {
    /*vector<Animals *> vector1 = {new SeaAnimals("fish", "joe", 2), new Animals(), new SeaAnimals("star", "patric", 5)};

    for (Animals *a : vector1) {
        a->say();
    }*/

    vector<Animals> vec = {SeaAnimals("fish", "joe", 2), Animals(), SeaAnimals("star", "patric", 5)};
    for (Animals a : vec) {
        a.say();
        a.move();
    }
    return 0;
}