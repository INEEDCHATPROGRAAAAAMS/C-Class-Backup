#include <iostream>
using namespace std;

int main()
{
	cout<< "Gavin Mansour\n3-9\nsn";
	int mo=0;
	do{
		cout<<"\nEnter a value:";
		cin>>mo;
		cout<<mo/10;
		mo=mo%10;
		cout<<mo/10;
		mo=mo%10;
		cout<<mo/10;
		mo=mo%10;
		cout<<"\nThe second number is=" <<mo;
	}while (mo > 0);
	cout<< "\nGoodbye!";
	return(0);

}
