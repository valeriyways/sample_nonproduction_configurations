#include <iostream>
#include <cstdlib>
#include <ctime> // optional!
#include <algorithm>

#include "Array1D.h"

using namespace std;

Array1D::Array1D(int s) {
    base1D = new int[s];
    size = s;
    isSorted = false;
    std::srand(std::time(0)); // optional!
}

Array1D::~Array1D() {
    delete [] base1D; // from ashes to ashes
}

void Array1D::printArray1D() {
    cout << "[";
    for (int i = 0; i < size; ++i) {
       cout << base1D[i] << ((i < size - 1) ? "  " : "]\n");
    }
};

void Array1D::insertSortArray1D() {
    if (isSorted) return; // Already sorted
    for(int i=1; i < size; i++)                          // personally i had no
    for(int j=i; j > 0 && base1D[j-1] > base1D[j]; j--)  // time to understand
    swap(base1D[j-1], base1D[j]);                        // algorithm properly
    isSorted = true;
};

bool Array1D::searchElement_in_Array1D(int e) { // It's aWe_Some to mix c++, python and java's naming style patterns within one single line
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
        base1D[i] = 10 + rand() % 90; // http://www.reactiongifs.com/r/mgc.gif
    }
    isSorted = false; // Random numbers are not always appear in sorted order
};

// if implementation of following function
// changes you should check isSorted parameter
bool Array1D::ChangeArray1D(int s) { // bool??? int???
    Array1D* tmp = new Array1D(s); // s -> size!
    for (int i=0; i < min(s, size); ++i) {
        tmp->base1D[i] = base1D[i];
    }
    delete [] base1D;
    base1D = tmp->base1D;
    size = tmp->size;
    return true; // WTF!!! => (https://en.wikipedia.org/wiki/Watiwa_language)
};

int& Array1D::operator[](int i) {
    isSorted = false; // You could occasionally insert number and break monotonic sequence
    return base1D[i];
}
