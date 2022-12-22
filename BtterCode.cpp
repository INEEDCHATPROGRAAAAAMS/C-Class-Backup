#include <iostream>
#include <cstdlib>

using namespace std;
void DrawBox(int length, char mark);
void DrawBox(int length);

int main()
{
	DrawBox(5);
//	cout<<"\n";
	DrawBox(15,'#');
	
}
void DrawBox(int length, char mark)
{
	for (int i=0;i<length;i++)
		DrawBox(length,'-');
}
void DrawBox (int length)
{
		for (int i=0;i<length;i++)
		cout<<"-";
	cout<<endl;
	
}


