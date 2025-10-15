#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ofstream file("cpp.txt");
	file<<"Welcome to cpp class";
	cout<<"File is created";
	return 0;
}
