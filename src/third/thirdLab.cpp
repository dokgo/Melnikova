//
// Created by dokgo on 10.05.17.
//

#include "Bouquet.h"
using namespace std;

int main() {
    Bouquet bouquet(Flower("rose", Color::YELLOW));
    bouquet.addFlower(Flower("lotus", Color::WHITE));
    bouquet.addFlower(Flower("daisy", Color::GREEN));
    bouquet.addFlower(Flower("rose", Color::BLACK));

    bouquet.print();

    cout << bouquet.removeFlower(Flower("lotus", Color::WHITE)) << endl;
    cout << bouquet.removeFlower(Flower("lotus", Color::BLACK)) << endl;

    bouquet.print();


}
