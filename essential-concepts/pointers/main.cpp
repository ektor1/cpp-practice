#include <iostream>
#include <stdlib.h> // to use malloc() function

using namespace std;



int main() {
    int a = 10;
    int *p; // declaration of pointer variable
    p = &a; // initialization of pointer variable with address of a variable

    cout << &p << endl; // address
    cout << *p << endl; // value in address i.e. dereferencing 

    p = new int[5]; // pointer used for using heap memory

    return 0;
}
