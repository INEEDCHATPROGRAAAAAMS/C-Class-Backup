#include <iostream>
using namespace std;

int main()
{	
cout<< "Gavin Mansour\n4-7\n\n";
	long mo=0;
	cout<<"Enter a number (Maximum of value 2147483647)\n";
	cin>>mo;
	while (mo>0)
	{
		cout<<mo%10<<"\n";
		mo=mo/10;
}
	}
