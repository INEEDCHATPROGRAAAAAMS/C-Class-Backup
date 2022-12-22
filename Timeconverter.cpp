#include <iostream>
#include <cstdlib>

using namespace std;
	void Intro()
	{	
		cout<<"Welcome to the Time Converter!\nTo use this program,\nplease type the number next to the desired sub-program, and select enter!\n\n";
	}

	void DaysToHours()
	{	
		double days, hours;
		cout<<"You Have Selected: Days to Hours!\nenter the number of days: ";
		cin>>days;
		hours=days*24;
		cout<<"The number of hours in "<<days<<" Days is: "<<hours;
	}

		void HoursToDays()
	{	
		int days, hours;
		cout<<"You Have Selected: Hours to Days!\nEnter the number of hours: ";
		cin>>hours;
		days=hours/24;
		cout<<"The number of days in "<<hours<<" hours is: "<<days;
	}
		void HoursToMins()
	{	
		int mins, hours;
		cout<<"You Have Selected: Hours to Minutes!\nEnter the number of hours: ";
		cin>>hours;
		mins=hours*60;
		cout<<"The number of minutes in "<<hours<<" hours is: "<<mins;
	}
		void YearsToDays()
	{	
		int days, years;
		cout<<"You Have Selected: Years to Days!\nEnter the number of Years: ";
		cin>>years;
		days=years*365;
		cout<<"The number of days in "<<years<<" years is: "<<days;
	}
int main()
{	
	char choice=9;
	Intro();
	while (choice>0){
	cout<<"\n\n0. Exit.\n1. Days to Hours.\n2. Hours to Days.\n3. Hours to Minuites.\n4. Years to Days."<<endl;
	cout<<"Please enter your choice: ";
	cin>>choice;
	if(choice=='1')
		DaysToHours();
	else if (choice=='2')
		HoursToDays();
	else if (choice=='4')
		HoursToMins();
	else if (choice=='4')
		YearsToDays();
	else if (choice=='0'){
		cout<<"Goodbye!";
		break;}
	else
		cout<<"Invalid Selection!";
	}
}
