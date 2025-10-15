#include<iostream>
using namespace std;
template< typename T>
T add(T a,T b)
{
	return a+b;
};
int main()
{
	cout<<"For integers"<<add(2,5)<<endl;
	cout<<"For float"<<add(2.5,3.5)<<endl;
	cout<<"For char"<<add('a','b');
}

