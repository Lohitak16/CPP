#include<iostream>
using namespace std;
class Add
{
	public:
		int a,b;
		Add(int x,int y)
		{
			a=x;
			b=y;
		}
		int add()
		{
			return a+b;
		}
};
int main()
{
	int x,y;
	cout<<"enter the value for x and y"<<endl;
	cin>>x>>y;
	Add a(x,y);
	cout<<"the addition of 2 numbers: "<<a.add();
	return 0;
}
