#include<iostream>
using namespace std;
int x=100;
void test()
{
	int x=50;
	cout<<x<<endl;
	cout<<::x;//:: scope resolvution operator
}
int main()
{
	
	test();
	return 0;
}
