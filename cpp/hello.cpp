#include <cstdlib>
#include <iostream>

using namespace std;

int add(int x,int y)
{
	return x+y;
}
int main(int argc, char *argv[])
{
	int a=add(1,2);
	cout<<"1+2="<<a<<endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
