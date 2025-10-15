#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	string s;
		ifstream file("cpp.txt");
		file>>s;
		getline(file,s);
		cout<<"The read data from cpp.txt"<<s;
		return 0;
}
