#include <iostream>
#include <stdio.h>   
#include <math.h> 
using namespace std;

int main()


{
	float x1=0;
	float y1=0;
	float x2=0;
	float y2=0;
	int power = 2;
	
	cout<<"Enter X1 Cordinate: ";
	cin>>x1;
	cout<<"Enter Y1 Cordinate: ";
	cin>>y1;
	cout<<"Enter X2 Cordinate: ";
	cin>>x2;
	cout<<"Enter Y2 Cordinate: ";
	cin>>y2;
	
		x1=x2-x1;
		x1 = pow(x1,power);
		y1=y2-y1;
		y1 = pow(y1,power);
		y2=x1+y1;
		y2=sqrt(y2);
		//This literally does all of the math, DO NOT -FUCKING- TOUCH IT
	
	cout<<"Distance between points: ";
	cout<<y2;
}
