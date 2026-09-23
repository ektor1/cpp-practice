#include <iostream>


struct Rectangle {
    int length;
    int width;
};

struct Complex {
    int real;
    int img;
};

struct Student {
    char school[25];
    char name[25];
    char depart[15];
    int age;
};

int main() {
    Rectangle r = {10, 5}; // declare and initialize  
    printf("Area of rectangle is %d\n", r.length * r.width);

    Student s;
    s.name = "Ektor";
    std::cout << s.name << std::endl;
    return 0;
}
