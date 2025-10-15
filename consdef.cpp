#include<iostream>
using namespace std;
class student
{
	public: 
	int a,b;
	student()//default constructor...
	{
		a=10;
		b=20;
		
	}
void add()
{
	cout<<"a+b="<<a+b<<endl;
}
	
};
int main()
{
	student s1,s2,s3;
	s1.add();
	s2.add();
	return 0;
}

