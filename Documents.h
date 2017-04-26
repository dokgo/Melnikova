//
// Created by dokgo on 26.04.17.
//

#ifndef MELNIKOVA_DOCUMENTS_H
#define MELNIKOVA_DOCUMENTS_H

#include <string>

using namespace std;

class Documents {
private:
    string documentName;
    size_t documentSize;
public:
    Documents(string documentName, size_t documentSize);

    void printName();

    void printSize();

    ~Documents();
};


#endif //MELNIKOVA_DOCUMENTS_H
