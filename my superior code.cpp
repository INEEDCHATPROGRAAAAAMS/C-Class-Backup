#include <iostream>
#include <cstdlib>

using namespace std;
void DrawBox (int length, char mark='%');

int main()
{
	DrawBox(4);


}

void DrawBox (int length, char mark='%')
{
	for (int ae=0;ae<length;ae++)
	{
		for (int i=0;i<length;i++)
			cout<<mark;
		cout<<endl;
	}
}
