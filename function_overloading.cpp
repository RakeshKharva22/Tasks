#include<iostream>
using namespace std;

class Person
{
	public:
		
		string nm = "Vishal";
		int name()
		{
			cout<<"Name : "<<nm<<endl;
		}
		
		int name(string n)
		{
			nm=n;
			cout<<"Name : "<<nm<<endl;
		}
		
		int name(string n1,int n2)
		{
			
			cout<<"Name : "<<n1<<n2<<endl;
		}
		
		
	
};

int main()
{
	Person P;
	P.name();
	P.name("Herit");
	P.name("Dipali",34);
	return 0;
}

