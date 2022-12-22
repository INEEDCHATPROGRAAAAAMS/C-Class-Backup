#include <iostream>
#include <stdio.h>   
#include <math.h> 
using namespace std;

int main()


{
	float a=0;
	float b=0;
	float c=0;
	cout<< "Enter side a: ";
	cin>>a;
	cout<< "Enter side b: ";
	cin>>b;
	a=a*a;
	b=b*b;
	c=a+b;
	c=sqrt(c);
	cout<< "side c is ";
	cout<<c;
	
}
