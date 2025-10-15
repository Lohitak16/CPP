#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string s;
	fstream file("dbms.txt");
	if (! file. is_open())
	{
		cerr<<"File doesnot exist";
	}
	while (getline(file,s))
	cout<<s;
	return 0;
}
