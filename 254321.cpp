#include <iostream>
using namespace std;

int main()
{
	cout<< "Gavin Mansour\n3-9\nsn";
	int x=0;
	char Answer;
	do{
		cout<< "Enter a value!\n";
		cin>>x;
		cout<<((x/10)%10);
		cout<<"\nDo you want a second value? (Y/N)\n             ";
		cin>>Answer;
	}while (Answer == 'Y');
	cout<< "\nGoodbye!";
	return(0);
	}
