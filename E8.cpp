#include <iostream>
using namespace std;

int main()
{	
cout<< "Gavin Mansour\n4-7\n\n";
	long mo=0;
	int sum=0;
	int mo3=0;
	cout<<"Enter a number (Maximum of nine digits)\n";
	cin>>mo;
	while (mo>0)
	{
		sum=sum+(mo%10)*(mo%10)*(mo%10);
		mo=mo/10;
}
	cout<<"\n"<<sum;
	}
