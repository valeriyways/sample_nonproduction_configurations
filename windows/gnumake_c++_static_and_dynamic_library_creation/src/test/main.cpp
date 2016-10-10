#include <iostream>
#include <string>
#include <sstream>

#include <Array1D.h>

using namespace std;

int getInput();

int main(int argc, char **argv) {
    /* // TESTING API FROM "Array1D.h"!!!
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
    */

    // Interactions with User goes here
    int arraySize;

// label to restart program from this point
// if 5th element in menu is selected
 newArrayCreation:

    cout << "Enter array size: "; arraySize = getInput();
    Array1D userArray(arraySize);

    cout << "Enter " << arraySize << " elements with the keyboard: " << endl;
    for (int i = 0; i < arraySize; ++i) userArray[i] = getInput();

    int choice;
    while (true) {
        cout << endl;
        cout << "Enter code of any command below:" << endl;
        cout << "1. Print Array" << endl;
        cout << "2. Find element in Array" << endl;
        cout << "3. Sort Array" << endl;
        cout << "4. Fill Array's elements with Random Numbers" << endl;
        cout << "5. Finish work with current array" << endl;
        cout << "6. Finish program" << endl;
        cout << "Enter command's number: ";
        switch (getInput()) {
            case 1: userArray.printArray1D(); break;
            case 2: {
                int el;
                cout << "Enter element to search: "; el = getInput();
                cout << "ELEMENT " << (
                        userArray.searchElement_in_Array1D(el) ?
                            "FOUND":
                            "NOT FOUND"
                    ) << endl;
                break;
            }
            case 3: userArray.insertSortArray1D(); break;
            case 4: userArray.SetRandomElements(); break;
            case 5: {
                cout << "Do you want to create new Array? (enter '1' if so): ";
                if (1 == getInput()) goto newArrayCreation;
                break;
            }
            case 6: goto programExit;break;
            default:
                // http://stackoverflow.com/questions/15826188/what-most-correct-way-to-set-the-encoding-in-c
                cout << "я тебя не понимаю, переведи на английский" << endl;
                break;
        }
    }

// label to finish program jumping directly to this point
// if 6th element in menu is selected
  programExit:

    cout << "Bye" << endl;
    return 0;
}

int getInput() {
    string lainalaina;
    int numnumnum;
    cin >> lainalaina;
    stringstream syskey(lainalaina); // (.)(.)
    return (syskey >> numnumnum) ? (syskey.eof() ? numnumnum : -1) : -1; // (.)(.) // (.)(.)
}






















// Ohh crap!! ohhh crap i seee
// Ohh crap!! ohhh crap i seee
// Ohh crap!! ohhh crap i seee
// vvvvvvvvvvvvvvvvvvvvvvvvvvv

    // int i;
    // int &j = i;
    // int *p = &i;
    // i = 10; // j -> 10, *p -> 10

    // Matrix m1(3, 4), m2(1, 3), r;
    // r = m1 + m2;
    // r = m1.addMatrix(m2);

    //a1d.set(0, 10);
    //cout << a1d.get(0) << endl;
