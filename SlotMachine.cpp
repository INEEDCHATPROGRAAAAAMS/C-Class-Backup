#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int random = 0;
	int output = 0;
	int numone = 0;
	int numtwo = 0;
	int numtre = 0;
	int points = 0;
	int tokens = 100;
	char yorn;
	cout<<"Roll? (Y/N)";
	srand((unsigned) time(NULL));
	cin>>yorn;
	while((yorn=='y')||(yorn=='Y')&&(tokens>0)){	
		tokens--;
		random = 1+(rand()%3);
		numone=random;
		random = 1+(rand()%3);
		numtwo=random;
		random = 1+(rand()%3);
		numtre=random;
		cout<<"\n\n["<<numone<<"] ["<<numtwo<<"]  [";
		cout<<numtre<<"]";
		points=numone+numtwo+numtre;
		
		if ((numone==1)&&(numtwo==1)&&(numtre==1)){
			tokens=tokens+3;
			cout<<"\n\nYou Win 3 Tokens!\nYou Have:"<<tokens<<" Tokens.";
		}
		else if((numone==1)&&(numtwo==1)&&(numtre==1)){
			tokens=tokens+6;
			cout<<"\n\nYou Win 6 Tokens!\nYou Have:"<<tokens<<" Tokens.";
		}	
		else if ((numone==3)&&(numtwo==3)&&(numtre==3)){
			tokens=tokens+3;
			cout<<"\n\nYou Win 9 Tokens!\nYou Have:"<<tokens<<" Tokens.";
		}
		else
			cout<<"\n\nYou Lost!\nYou Have:"<<tokens<<" Tokens.";
		if(tokens==0){
			break;}
		cout<<" Roll Again? (Y/N) ";
		cin>>yorn;
	}
	if(tokens==0){
		cout<<"\n\nYou Ran out of money! You're now broke! Press Any Key to exit\n";
		system("pause");}
	}

