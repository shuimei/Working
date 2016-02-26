# include <iostream>
# include <cstdlib>
# include <stdio.h>
# include <string.h>
using namespace std;
int main(int argc, char * argv[])
{
	char buffer[128];
	cin>>buffer;
	int len = strlen(buffer);
	for (int i = 0;i<len/2;i++)
	{
		char temp=buffer[i];
		buffer[i]=buffer[len-i-1];
		buffer[len-i-1]=temp;
	}
	cout<<"inversed:"<<buffer<<endl;

	system("PAUSE");
	return EXIT_SUCCESS;
}