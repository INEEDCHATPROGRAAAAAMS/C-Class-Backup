#include <iostream>

using namespace std;

int main()
{	
int numOne = 0;
int numTwo = 0;
int output = 0;
cin>>numOne;
cin>>numTwo;
while!((numOne=='7')&&(numTwo=='1')) {
output = (numOne+numTwo)%10;
cout<<output;
numOne=numTwo;
numTwo=output;
}
}
