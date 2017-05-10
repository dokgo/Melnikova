//
// Created by dokgo on 10.05.17.
//

#include "Flower.h"

using namespace std;

Flower::Flower(string type, Color color) {
    this->type = type;
    this->color = color;
}

void Flower::setColor(Color color) {
    this->color = color;
}

void Flower::setType(string type) {
    this->type = type;
}

string Flower::toString() {
    return ("Type: " + type + " color: " + arr[(int)color]);
}

bool Flower::equals(Flower flower) {
    return (this->type.compare(flower.type) == 0 && this->color == flower.color);
}