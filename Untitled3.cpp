#include <iostream>
using namespace std;

int main()
{
	int olol;
	cout<<"Enter a positive number\n   ";
	cin>>olol;
	while(olol<0)&&(olol>10){
		cout<< "Number must be positive and less than 10\n\nPlease reenter\n\n";
		cin>> olol;
}
}
