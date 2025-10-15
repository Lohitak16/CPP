#include<iostream>
using namespace std;

class Add
{
	public:
	int A,B,C,D;
	
		Add(int a,int b)
		{
			A=a;
			B=b;
		}
		Add(int x,int y,int z)
		{
			A=x;
			B=y;
			C=z;
		}
		Add(int o,int p,int q,int r)
		{
			A=o;
			B=p;
			C=q;
			D=r;
		}
		void add()
		{
			cout<<"the addition is:"<<A+B<<endl;
			
		}
		void display()
		{
			cout<<"the addition is:"<<A+B+C<<endl;
			
		}
		void disp()
		{
			cout<<"the addition is:"<<A+B+C+D<<endl;
		}
};

int main()
{
	Add s1(1,2),s2(1,2,3),s3(1,2,3,4);
	s1.add();
	s2.display();
	s3.disp();
	return 0;
}
