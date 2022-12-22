#include <iostream>

using namespace std;

int main()
{	
	int upper=100;
	int lower=0;
	int counter=0;
	char hlorc;
	cout<<"Hello! This is a guessing game! Think of a number between 0 and 100 and I'll try to guess it!\nEnter H for high, l for low, and C for correct!\n";
	while(hlorc!='c' && hlorc!='C')
	{
		counter++;
		cout<<"Is the number you're thinking of: "<<(upper+lower)/2<<"?\n";
		cin>>hlorc;
		if (hlorc!='h' && hlorc!='H')
			lower=(upper+lower)/2;
		else if ((hlorc!='l')&&(hlorc!='L'))
			upper=(upper+lower)/2;
		}
	cout<<"I Guessed it! I took: "<<counter<<" Guesses!";
	}
