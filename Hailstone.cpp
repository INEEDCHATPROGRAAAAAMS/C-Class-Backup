
#include <iostream>

using namespace std;

int main()
{	
	int input = 0;
	int calvar=0;
	int output=0;
	int n=0;
	int b=0;
for(input=1;input<=715827882;input++){
	b=0;
		output=input;
		cout<<input<<",";
			while (b<200){
				if ((output%2)==0){
					output=output/2;
					cout<<output<<",";
					b++;
			}
				else{
					output=output*3;
					output=output+1;
					cout<<output<<",";
					b++;
			}
		if (output==1){
			break;
		}

	}
		cout<<"\n\n";

}
}
