#include <iostream>
using namespace std;

int main()


{
	int aeros = 1;
	while (aeros > 0);
	cout<<"\nPlease Enter Model Number\nPress 0 to exit.\n";
	cin>> aeros;
	if (aeros == 119||aeros == 179||(aeros >= 189 && aeros <= 195)||aeros <= 221||aeros <= 780)
		cout<< "\nYour Car is Faulty, Please Bring It in for Repairs!";
		else
			cout<< "\nYour Car is not faulty.";
}
