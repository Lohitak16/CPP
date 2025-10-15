#include<iostream>
int x=100;
void test()
{
	int x=50;
	std::cout<<x<<"\n";
	std::cout<<::x;
}
int main()
{
	test();
	return 0;
}
