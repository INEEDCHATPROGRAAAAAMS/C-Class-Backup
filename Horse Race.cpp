#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
using namespace std;
void horse(int &p);

int main()
{
    srand((unsigned) time(NULL));
    
    int p=0,p1=0,p2=0,p3=0;
    do{
    system("cls");
        horse (p);
        Sleep(20);
        horse (p1);
        Sleep(20);
        horse (p2);
        Sleep(20);
        horse (p3);
        Sleep(150);
    }while ((p<20)&&(p1<20)&&(p2<20)&&(p3<20));
    if(p>=20)
    	cout<<"Horse 1 Wins!\n";
	if(p1>=20)
    	cout<<"Horse 2 Wins!\n";
	if(p2>=20)
    	cout<<"Horse 3 Wins!\n";
	if(p3>=20)
    	cout<<"Horse 4 Wins!\n";	
    system("pause");

}
void horse (int &p)
{
    for (int i=0;i<20;i++)
        if (i==p)
            cout<<"#";
        else
            cout<<"-";
        cout<<endl; 

        if ((rand()%10+1)>5)
            p++;
    

    
}
