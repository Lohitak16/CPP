#include<iostream>
using namespace std;
class sum
{
	public:
		int a,b,c,d;
		sum(int x,int y)
		{
			a=x;
			b=y;
		}
		sum(int x,int y,int z)
		{
			a=x;
		    b=y;
		    c=z;
		}
		sum(int x,int y, int z,int n)
		{
			a=x;
			b=y;
			c=z;
			d=n;
			
		}
		int show()
		{
			return a+b;
		
		}
		int display()
		{
				return a+b+c;
			
		}
		int disp()
		{
			return a+b+c+d;
		}
};
int main()
{
	int x,y,z,n;
	cout<<"enter a,b,c,d values";
	cin>>x>>y>>z>>n;
	sum a1(x,y),a2(x,y,z),a3(x,y,z,n);
	cout<<"add:"<<a1.show()<<endl;
	cout<<"add:"<<a2.display()<<endl;
	cout<<"add:"<<a3.disp()<<endl;
}
