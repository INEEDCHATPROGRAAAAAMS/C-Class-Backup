#include <iostream>
#include <conio.h>
//#include <lvp\random.h>

using namespace std;

int main()
{	
	randomize();
	cout<<"Doodler! Press I/J/K/M to move, Q to quit" << endl;
	char KeyPressed;
	int x=40; int y=10;
	do{
		gotoxy(x,y);
		cout<<'*';
		gotoxy(x.y);
		
		KeyPressed = getch();
		if((KeyPressed == 'i')||(KeyPressed == 'I'))
			y==;
		else if ((KeyPressed=='M')||(KeyPressed=='m'))
			y++;
		else if ((KeyPressed=='J')||(KeyPressed=='j'))
			x--;
		else if ((KeyPressed=='K')||(KeyPressed=='k'))
			x++;
		else if ((KeyPressed=='Q')||(KeyPressed=='q'))
			;
		else
			cout<<"\a";
		}while ((KeyPressed != 'Q')&&(KeyPressed!='q'));
			gotoxy(1,1);
		clreol();
		cout<<"Random Stars! Press Any Key to Stop."<<endl;
		while(!kbhit()){
			gotoxy(l+random(60),2+random(20));
			cout<<"* ";
		}
	return (0);
	}
