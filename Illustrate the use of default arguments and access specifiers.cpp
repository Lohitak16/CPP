#include <iostream>
using namespace std;
class Person {
private:
    int age; 

public:
    void setAge(int a = 18) {
        age = a;
    }

    void showAge() {
        cout << "Age: " << age << endl;
    }
};

int main() 
{
    Person p1, p2;

    p1.setAge();     
    p2.setAge(25);    

    p1.showAge();     
    p2.showAge();    

    return 0;
}
