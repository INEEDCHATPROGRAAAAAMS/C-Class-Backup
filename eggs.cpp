#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
	int eggs=1;
	double price=0;
	int numval=0;
	double prval=0;
	while (eggs>0){
	cout<<"Enter the number of eggs to price:\n";
	cin>>eggs;
	if (eggs<=48)
		price=eggs*0.041;
		else if ((eggs<=72)&&(eggs>48))
		price=eggs*0.037;
		else if ((eggs<=132)&&(eggs>72))
		price=eggs*0.033;
		else if ((eggs>132))
		price=eggs*0.029;
		
		cout<<"you have "<<eggs<<" eggs and the total cost is $"<<setprecision(3)<<price<<"\n";
	}
	while(numval<120){
		numval=numval+1;
		if (numval<=48)
		prval=numval*0.041;
		else if ((numval<=72)&&(numval>48))
		prval=numval*0.037;
		else if ((numval<=132)&&(numval>72))
		prval=numval*0.033;
		else if ((numval>132))
		prval=numval*0.029;
		cout<<numval<<" . "<<setprecision(3)<<prval<<"\n";
		prval=0;
	}
	}
	
