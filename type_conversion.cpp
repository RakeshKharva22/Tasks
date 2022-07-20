/*Implicit Conversion*/

#include<iostream>
using namespace std;
int main()
{
	int a=20;
	char b='j';
	
	
	a=b; // char to int
	
	float c;
	
	c=a+3.4; // int to float
	
	cout<<c<<endl;
	
	return 0;
}