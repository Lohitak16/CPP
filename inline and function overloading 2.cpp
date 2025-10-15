#include <iostream>
using namespace std;

// Inline function
inline int multiply(int a, int b) {
    return a * b;
}

// Function overloading
void display(int x) {
    cout << "Integer: " << x << endl;
}

void display(double y) {
    cout << "Double: " << y << endl;
}

void display(char z) {
    cout << "Character: " << z << endl;
}

int main() {
    // Using inline function
    cout << "Multiplication of 3 and 4: " << multiply(3, 4) << endl;

    // Using overloaded functions
    display(10);
    display(5.5);
    display('A');

    return 0;
}

