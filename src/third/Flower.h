//
// Created by dokgo on 10.05.17.
//

#ifndef MELNIKOVA_FLOWER_H
#define MELNIKOVA_FLOWER_H

#include <vector>
#include "Color.cpp"

class Flower {
    Color color;
    string type;
    vector<string> arr{"red", "blue", "white", "green", "yellow", "black"};
public:
    Flower(string type, Color color);

    void setColor(Color color);

    void setType(string);

    bool equals(Flower flower);

    string toString();

};


#endif //MELNIKOVA_FLOWER_H
