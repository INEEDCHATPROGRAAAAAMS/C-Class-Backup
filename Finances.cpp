#include <iostream>
using namespace std;

int main()


{
	int a;
	double bal=0;
	double maxbal=0;
	double intrest=0;
	double compoundint=0;
	int year=1;
	cout<< "\nPlease Enter Initial Balance: ";
	cin>>bal;
	cout<<"\nPlease Enter Desired Balance: ";
	cin>>maxbal;
	cout<<"\nPlease Enter Account Intrest rate: ";
	cin>>intrest;
	intrest=intrest/100;
	cout<<intrest;
	while (maxbal>=bal)
		{
		compoundint = bal*intrest;
		bal = bal+compoundint;
		year = year+1;
		cout<<"\n\n\nCurrent Year:";
		cout<< year;
		cout<<"\nCurrent Balance:";
		cout<<bal;
		}
	}
