#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
	cout<<"----------求素数----------"<<endl;
	int min=0,max=0;
	
	cout<<"请输入一个范围:"<<endl;
	cout<<"大于等于:";
	cin>>min;
	cout<<endl;
	if (min<1) min=1;
	cout<<"小于:";
	cin>>max;
	cout<<endl;
	
	while (max<=min)
	{
		cout<<"范围的上限必须大于下限。"<<"请重新输入"<<endl;
		cin>>max;
	}
	cout<<"上述范围内的素数是:"<<endl;

	for (int i=min;i<max;i++)
	{
		bool flag=true;
		if(i==1||i==2)
		{
			flag=true;
		}
		else
		{
			int s = static_cast<int>(sqrt(i));
			for (int j=2;j<s;j++)
			{
				if((i%j)==0)
				{
					flag=false;
				}
			}
		}
		if (flag)
		{
			cout<<i<<endl;
		}
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}
