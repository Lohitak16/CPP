#include<iostream>
using namespace std;
void num(int x)
{
	try
	{
		if(x==0)
			throw(5);
		else if(x==1)
			throw('s');
		else if(x<0)
			throw(2.4);
	}
	catch(int i)
	{
		cout<<"the integer values is"<<i<<endl;
	}
	catch(char e)
	{
		cout<<"the character values is"<<e<<endl;
	}
	catch(float f)
	{
		cout<<"the float values is"<<f<<endl;
	}
}
int main()
{
	num(0);
	num(1);
	num(-2);
	return 0;
}
