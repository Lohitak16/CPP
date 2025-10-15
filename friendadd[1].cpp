#include<iostream>
using namespace std;

class B;  // Forward declaration

class A {
    int a;
public:
    void data() {
        cout << "Enter value for a: ";
        cin >> a;
    }
    friend int add(A, B);
};

class B {
    int b;
public:
    void data() {
        cout << "Enter value for b: ";
        cin >> b;
    }
    friend int add(A, B);
};

int add(A obj1, B obj2) {
    return (obj1.a + obj2.b);
}

int main() {
    A obj1;
    B obj2;

    obj1.data();  // Correct function call with ()
    obj2.data();  // Correct function call with ()

    cout << "Sum: " << add(obj1, obj2) << endl;

    return 0;
}

