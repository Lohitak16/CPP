#include<iostream>
using namespace std;
class animal
{
	public:
		virtual void makesound()
		{
			cout<<"sound not yet decided"<<endl;
		}
};
class dog:public animal
{
	public:
	void makesound()
	{
		cout<<"The sound of dog is bow"<<endl;
	}
};
class cat:public animal
{
	public:
	void makesound()
	{
		cout<<"The sound of cat is meow"<<endl;
	}
};
int main()
{
    animal A;
    dog d;
    animal *ptr=&A;
    ptr->makesound()
    *ptr=&D
    return 0;
}
