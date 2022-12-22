#include <iostream>
using namespace std;

int main()
{	
int extravar=0;
int counter=0;
int numbone=0;
int numbtwo=0;
cout<<"Enter Small Number:\n"
cin>>numbone;
cout<<"\nEnter Larger Number:\n"
cin>>numbtwo;
while (counter<numbone)
{
	counter=counter+2;
}
if (counter!=numbone)
	numbone=numbone+1;

counter=0;
while (counter<numbtwo)
{
	counter=counter+2;
}
if (counter!=numbtwo)
	numbtwo=numbtwo-1;

counter=0;
extravar=numbone;
cout<<"The Even Numbers Between the two you picked are:\n";
while (numbone<numbtwo)
{
	cout<<numbone<<",";
	numbone=numbone+2;
}
cout<<numbtwo;
}
