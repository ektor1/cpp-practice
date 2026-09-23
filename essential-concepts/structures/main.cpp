#include <iostream>
#include <string>


struct Rectangle {
    int length;
    int width;
};

struct Complex {
    int real;
    int img;
};

struct Student {
    std::string school;
    std::string name;
    std::string depart;
    int age;
};

struct Card {
    // map ints to hash map with the names of each value
    int face;
    int shape;
    int colour;
};

int main() {
    Rectangle r = {10, 5}; // declare and initialize  
    printf("Area of rectangle is %d\n", r.length * r.width);

    Student s;
    s.name = "Ektor";
    std::cout << s.name << std::endl;
    return 0;
}
