#include <iostream>
using namespace std;
int num = 100;
namespace MyNamespace
{
    int num = 200;

    void show() 
	{
        cout << "Inside MyNamespace, num = " << num << endl;
    }
}

int main()
{
    int num = 300;

    cout << "Local num = " << num << endl;         
    cout << "Global num = " << ::num << endl;     
    cout << "Namespace num = " << MyNamespace::num << endl;

    MyNamespace::show(); 

    return 0;
}
