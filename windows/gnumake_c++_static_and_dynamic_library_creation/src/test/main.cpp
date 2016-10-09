#include <iostream>
#include <Array1D.h>

using namespace std;

int main(int argc, char **argv) {
    Array1D a1d(20);

    a1d.SetRandomElements();
    a1d.insertSortArray1D();
    cout << "bool???" << a1d.ChangeArray1D(10) << endl;
    a1d.printArray1D();
    a1d[5] = 66;
    cout << a1d[5] << " inserted into [5]" << endl;
    a1d.printArray1D();
    cout << a1d[5] << endl;
    cout << (a1d.searchElement_in_Array1D(66)?"66 found":"66 not found") << endl;
    cout << (a1d.searchElement_in_Array1D(100)?"100 found":"100 not found") << endl;
    cout << (a1d.searchElement_in_Array1D(0)?"0 found":"0 not found") << endl;
    return 0;
}









    // int i;
    // int &j = i;
    // int *p = &i;
    
    // i = 10; // j -> 10, *p -> 10


    // Matrix m1(3, 4), m2(1, 3), r;
    // r = m1 + m2;
    // r = m1.addMatrix(m2);
   
    //a1d.set(0, 10);
    //cout << a1d.get(0) << endl;
