#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string s;
	ifstream file("cpp.txt");
	while(getline(file,s))
	{
		cout<<s<<endl;
	}
return 0;
}

