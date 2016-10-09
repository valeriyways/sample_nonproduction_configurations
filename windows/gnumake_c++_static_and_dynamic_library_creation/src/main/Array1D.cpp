#include <iostream>
#include <cstdlib>
#include <ctime> // optional!
#include <algorithm>

#include "Array1D.h"

using namespace std;

Array1D::Array1D(int s) {
    base1D = new int[size];
    size = s;
    isSorted = false;
    std::srand(std::time(0)); // optional!
}

void Array1D::printArray1D() {
    for (int i=0; i<size; ++i) {
       cout << base1D[i] << " ";
    }
    cout << endl;
};

void Array1D::insertSortArray1D() {
    for(int i=1; i < size; i++)
    for(int j=i; j > 0 && base1D[j-1] > base1D[j]; j--)
    swap(base1D[j-1], base1D[j]);
};

bool Array1D::searchElement_in_Array1D(int e) {
    int i = 0, x = 0, y = size;
    insertSortArray1D();
    while (e != base1D[i] && x < y) {
        i = (x + y) / 2;
        if (e > base1D[i]) x = i + 1; else
        if (e < base1D[i]) y = i - 1;
    }
    return e == base1D[i];
};

void Array1D::SetRandomElements() {
    for (int i=0; i<size; ++i) {
        base1D[i] = 10 + rand() % 90;
    }
};

bool Array1D::ChangeArray1D(int s) { // bool??? int???
    Array1D* tmp = new Array1D(s); // s -> size!
    for (int i=0; i < min(s, size); ++i) {
        tmp->base1D[i] = base1D[i];
    }
    base1D = tmp->base1D;
    size = tmp->size;
    return true; // WTF!!!
};

int& Array1D::operator[](int i) {
    return base1D[i];
}
