#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"Enter a,b,c:";
	cin>>a>>b>>c;
	float d=b*b-4*a*c;
	if (d>=0)
	{
		float r1=(-b+sqrt(d))/(2*a);
		float r2=(-b-sqrt(d))/(2*a);
		cout<<"roots:"<<r1<<"and"<<r2<<endl;
	}
	else
	{
		cout<<"no real roots"<<endl;
	}
	return 0;
}
