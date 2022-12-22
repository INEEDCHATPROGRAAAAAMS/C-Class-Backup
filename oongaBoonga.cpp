#include <iostream>

using namespace std;

int main()
{	
	int varib = 0;
	cout<<"Enter a Number from 0-9, I will attempt to find your favorite number!\n";
	cin>>varib;
		if	(varib<4){
		varib=varib+1;
		varib=varib*2;}
	varib=varib*56;
	varib=varib/40;
	cout<<"Your favorite number is...";
	cout<<"\n...";
	cout<<"\n...\n";
	cout<<varib<<"!";
	cin>>varib;
}
