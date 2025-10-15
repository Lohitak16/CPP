#include<iostream>
using namespace std;
class student
{
	public:
	int rollno;
	student(int r)
	{
		rollno=r;
	}
	student(const student &s)
	{
		rollno=s.rollno;
		
	}
	void display()
	{
		cout<<"the rollno :"<<rollno<<endl;
	}
	void add()
	{
		cout<<"rollno="<<rollno+1<<endl;
		
	}
};
int main()
{
	student s1(100);
	s1.display();
 	student s2=s1;
 	s2.display();
 	s1.add();
 	s2.add();
}
