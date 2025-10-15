#include <iostream>
using namespace std;
inline int square(int x) 
{
    return x * x;
}
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    cout << "Square of 4: " << square(4) << endl;
    cout << "Add 3 and 5 (int): " << add(3, 5) << endl;
    cout << "Add 2.5 and 4.5 (double): " << add(2.5, 4.5) << endl;
    return 0;
}

