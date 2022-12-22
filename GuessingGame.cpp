#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{	
	int random = 0;
	int input = 0;
	int attempts = 0;
	srand((unsigned) time(NULL));
	random = 1+(rand()%101);
	cout<<"Please Enter A Number Between 1 and 100\n";
	while(input!=random){
	cin>>input;
		if(input<random){
			cout<<"Too low! Try again!\nPlease Enter A Number Between 1 and 100\n\n";
			attempts++;
		}
		else if (input>random){
			cout<<"Too High! Try again!\nPlease Enter A Number Between 1 and 100\n\n";
			attempts++;
		}
		else if (input==random)
			cout<<"You got it! The Number was: "<<random<<"\nIt took you: "<<attempts<<" Attempts!\n\n";
			
	}
	system("pause");
}
