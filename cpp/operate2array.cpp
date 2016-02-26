#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int matrix[4][3];
	cout<<"input 12 integers:"<<endl;
	for (int i =0;i<4;i++)
	{
		for (int j=0;j<3;j++)
		{
			cin>>matrix[i][j];
		}
	}
	for (int i=0;i<4;i++)
	{
		for (int j=0;j<3;j++)
		{
			if(j>0) cout<<" ";
			cout<<&matrix[i][j];
		}
		cout<<endl;
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}