#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int const len = 10;
	int arr[len];
	cout<<"input 10 elements:"<<endl;
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	for(int i = 0;i<len;i++)
	{
		for (int j=0;j<len-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"sort results:"<<endl;
	for (int i=0;i<len;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}