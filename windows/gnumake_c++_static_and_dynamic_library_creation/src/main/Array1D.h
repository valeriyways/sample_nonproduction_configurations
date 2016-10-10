#ifndef ARRAY1D_H
#define ARRAY1D_H
class Array1D {
    bool isSorted;
    int * base1D;
    int size;
    
  public:
    Array1D(int);
    ~Array1D();
    void printArray1D();
    void insertSortArray1D();
    bool searchElement_in_Array1D(int);
    void SetRandomElements();
    bool ChangeArray1D(int);
    int& operator[](int i);
};
#endif // ARRAY1D_H













// void set(int index, int value);
// int get(int index);
