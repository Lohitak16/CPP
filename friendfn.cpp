#include<iostream>
using namespace std;
class base
{
	private :
		int private_variable;
	protected:
		int protected_variable;
	public:
		base(){
			private_variable=10;
			protected_variable=99;
		}
		friend void friend_name(base& obj1);		
};
void friend_name(base& obj1)
{
	cout<<"the private variable is ";
	cout<<obj1.private_variable<<endl;
	cout<<"protected_variable is ";
	cout<<obj1.protected_variable;
}
int main()
{
	base obj1;
	friend_name(obj1);
}

