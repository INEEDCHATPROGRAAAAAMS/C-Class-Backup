#include <iostream>
using namespace std;

int main()
{
	int temp=0;
	cout<< "---------------------------------Enter the current temperature (F*)---------------------------------\n";
	cin>>temp;
	if(temp<=40)
		cout<< "Wear a heavy jacket!";
	else
		cout<< "Wear a light coat, or no coat at all!";
	}
