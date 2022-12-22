#include <iostream>
using namespace std;

int main()


{
	double weight = 0;
	double length = 0;
	double width = 0;
	double height = 0;
	cout<<"\n\n\n\n\nPackage Weight (grams):\n";
	cin>> weight;
	weight = weight/1000;
	cout<<"Package Length (cm):\n";
	cin>>length;
	length = length/100;
	cout<<"Package Width (cm):\n";
	cin>>width;
	width = width/100;
	cout<<"Package Height (cm):\n";
	cin>>height;
	height = height/100;
	if (weight <= 0)
		cout<< "Sorry, your package is an invalid weight!";
		else if (length * width * height <= 0)
			cout<< "Rejected, Your package is an invalid size!";
		else if ((length * width * height >= .1) && (weight >= 27))
			cout<< "\nPackage too large and too heavy!";
		else if ((length * width * height >= .1) && (weight < 27))
			cout<< "\nPackage too large!";
		else if ((weight >= 27) && (length * width * height < .1))
			cout<< "\nPackage too heavy!";
		else 
			cout<< "\nPackage accepted!";
}
