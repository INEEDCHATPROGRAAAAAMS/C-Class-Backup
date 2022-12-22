#include <iostream>

using namespace std;

int main()
{	
	int input = 0;
	int n=1;

	cin>>input;
	
	while(input>1)
		{		
		n=n*input;
		input--;
		}
	cout<<n;

}
