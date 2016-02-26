#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	cout<<"--------求最大值-----------"<<endl;
	int temp = 0;
	int max = 0;
	cout<<"请输入５个整数:"<<endl;
	
	for (int i=0;i<5;i++)
	{
		cin>>temp;
		if (temp>max)
		{
			max=temp;
		}
	}
	cout<<"最大值是:"<<max<<endl;
	
	system("PAUSE");
	return 0;
}
