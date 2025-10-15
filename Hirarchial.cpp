#include<iostream>
using namespace std;
class A
{
	public:
		void a()
		{
			cout<<"parent class"<<endl;
		}
		
};
class B:public A
{
	public:
		void b()
		{
			cout<<"B is children for A";
		}
};
class C:public A
{
	public:
		void c()
		{
			cout<<"C is children for A";
		}
};
class D:public A
{
	public:
		void d()
		{
			cout<<"D is children for A";
		}
};
int main()
{
	A a1;
	B b1;
	C c1;
	D d1;
	a1.a();
	b1.b();
	c1.c();
	d1.d();
	return 0;
}
