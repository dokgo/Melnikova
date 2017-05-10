//
// Created by dokgo on 10.05.17.
//

#include "Bouquet.h"

using namespace std;

Bouquet::~Bouquet() {
    if (isDynamic) {
    }
}

Bouquet::Bouquet() {
    isDynamic = true;
}

Bouquet::Bouquet(Flower flower) {
    flowers.push_back(flower);
    isDynamic = false;
}

Bouquet::Bouquet(const vector<Flower> flowers) {
    this->flowers = flowers;
}

void Bouquet::addFlower(Flower flower) {
    flowers.push_back(flower);
}

bool Bouquet::removeFlower(Flower flower) {
    for (int i = 0; i < flowers.size(); ++i) {
        if (flowers[i].equals(flower)) {
            flowers.erase(flowers.begin() + i);
            return true;
        };
    }
    return false;
}

void Bouquet::print() {
    for (Flower flower : flowers) {
        cout << flower.toString() << endl;
    }
}

