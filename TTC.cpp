#include<iostream>
using namespace std;
int main()
{
	int a,b,res;
	cin>>a>>b;
	res=a-b;
	try
	{
	   if(res!=0)
	   {
	   	  cout<<a/res;
	   }
	   else
	   {
	   	throw(res);
			} 	
	}
	catch(int x)
	{
		cout<<"The result contains zero which leads to division by zero equal";
	}
	
	cout<<"Successful Termination";
	return 0;
}
