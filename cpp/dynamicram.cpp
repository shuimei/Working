#include <iostream>
using namespace std;

int main()
{
	int * pCount = new int;
	cout<<"请输入数组的长度"<<endl;
	cin>>*pCount;
	cout<<"请输入数组的元素"<<endl;
	int *pArray = new int[*pCount];
	for(int i = 0;i<*pCount;i++)
	{
		cin>>pArray[i];
	}
	cout<<"数组元素为："<<endl;
	for (int i = 0;i<*pCount;i++)
	{
		cout<<pArray[i]<<endl;
	}
	delete pCount;
	delete pArray;
	return 0;
}
