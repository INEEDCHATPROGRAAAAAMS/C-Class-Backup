#include <iostream>
using namespace std;

int main()
{
	string word = "mystring";
	do{
		cout<<"Please Enter The Password:\n";
		cin>> word;
}while (word != "happiness");
cout<< "Password Correct, Welcome!";
}
