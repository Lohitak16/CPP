#include<iostream>
using namespace std;
inline int num1(int n)
{
	return n*n;
}
int main()
{
	int n;
	cout<<"enter the number:";
	cin>>n;
	int square=num1(n);
	cout<<square;
	return 0;
}
