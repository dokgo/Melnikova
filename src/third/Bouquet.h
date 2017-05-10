//
// Created by dokgo on 10.05.17.
//

#ifndef MELNIKOVA_BOUQUET_H
#define MELNIKOVA_BOUQUET_H


#include <vector>
#include "Flower.h"

using std::vector;

class Bouquet {
    vector<Flower> flowers;
    bool isDynamic;
public:
    ~Bouquet();

    Bouquet();

    Bouquet(Flower flower);

    Bouquet(vector<Flower> flowers);

    void addFlower(Flower flower);

    bool removeFlower(Flower);

    void print();
};


#endif //MELNIKOVA_BOUQUET_H
