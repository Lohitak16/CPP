#include<iostream>
using namespace std;
class box
{
	int length;
public:
	void setlength(int l) { length = l;}
	void showlength() { cout << "Length: " << length << endl; }
};
int main()
{
	box b1;
	box *ptr = &b1;
	ptr->setlength(67);
	ptr->showlength();
	return 0;
}
