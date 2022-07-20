#include<iostream>
using namespace std;

class A
{
	public:
		int a;
		int getA(int value)
		{
			a=value;
			cout<<a<<"Class A"<<endl;
		}
	
};

class B : public A
{
	public:
	int getA(int value)
		{
			a=value;
			cout<<a<<"Class B"<<endl;
		}
};

int main()
{
	
	B obj;
	obj.getA(34);
	obj.A::getA(34);
	return 0;
}