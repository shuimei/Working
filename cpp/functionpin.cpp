#include <iostream>
#include <cstdlib>
using namespace std;
typedef bool(*FUN_PTR)(int a, int b);
void sort(int array[], int n, FUN_PTR pf)
{
	for (int i=0;i<n-1;i++)
	{
		int index=i;
		int val =array[i];
		for (int j=i+1;j<n;j++)
		{
			if (pf(val, array[j]))
			{
				val=array[j];
				index=j;
			}
		}
		if (val !=array[i])
		{
			array[index]=array[i];
			array[i]=val;
		}
	}
}

int main(int argc, char *argv[])
{
	int array[3]={5,3,6};

	bool less(int a,int b);
	sort(array,3,&less);
	for (int i=0;i<3;i++)
	{
		cout<<array[i]<<' ';
	}

	bool big(int a, int b);
	sort(array,3,&big);
	for (int i=0;i<3;i++)
	{
		cout<<array[i]<<' ';
	}

	return 0;
}
bool less(int a,int b)
{
	return a<b;
}
bool big(int a, int b)
{
	return a>b;
}