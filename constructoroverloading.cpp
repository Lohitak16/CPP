#include<iostream>
using namespace std;
class student
{
	public:
		int rollno;
		student()//default constructor
		{
			rollno=10;
		}
		student(int r)//paratermized construc
		{
			rollno=r;
		}
		void show()
		{
			cout<<"the student rollno is :"<<rollno<<endl;
		}
};
int main()
{
	student s1,s2(101);
	s1.show();
	s2.show();
}
