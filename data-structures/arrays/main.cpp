#include <iostream>


int main() {

    int A[5]; // declare an empty array of size 5
    
    int B[5] = {2, 4, 6, 8, 10}; // declare and initialize array
    int C[5] = {0}; // declare array of zeros 
    for (int i=0; i<5; i++) {
        std::cout << B[i] << std::endl;
    }

    //sizeof() gets the size of the array in bytes. 
    std::cout << sizeof(B) << std::endl; // Each position takes 4 bytes. Prints 20
    std::cout << sizeof(B) / sizeof(B[0]) << std::endl; // get num of elements in array
    
    // loop through elements
    for (int num:C) {
        std::cout << num << std::endl;
    }

    return 0;
}

