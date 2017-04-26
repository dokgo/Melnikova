//
// Created by dokgo on 26.04.17.
//
#include <iostream>
#include "Documents.h"


Documents::Documents(string documentName, size_t documentSize) {
    this->documentName = documentName;
    this->documentSize = documentSize;
}

void Documents::printName() {
    cout << documentName << endl;
}

void Documents::printSize() {
    cout << documentSize << endl;
}

Documents::~Documents() {
    cout << "Document " << documentName << " destroyed" << endl;
}
