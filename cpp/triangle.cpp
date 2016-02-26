#include <cstdlib>
#include <iostream>
using namespace std;
struct Triangle
{
	double a;
	double b;
	double c;
};
int main()
{
	cout<<"______________三角形的计算和表示____________________"<<endl;
	cout<<endl;
	Triangle t;
	cout<<"依次输入三角形的边长:"<<endl;
	cin>>t.a;
	cin>>t.b;
	cin>>t.c;
	
	double max=t.a>t.b?t.a:t.b;
	double x=t.a+t.b-max;
	double z=max>t.c?max:t.c;
	double y=t.a+t.b+t.c-x-z;
	char pType="";	
	if(z<=0 || z>=x+y)
	{
		cout<<"输入的边长不能组成一个三角形。"<<endl;
		cout<<endl;
		system("PAUSE");
		return EXIT_SUCCESS;
	}
	
	if(z*z==x*x+y*y)
	{
		pType="直角三角形";
	}
	else if(z*z<x*x+y*y)
	{
		pType="锐角三角形";
	}
	else pType="钝角三角形";
	cout<<"三角形类型:"<<pType<<endl;
	cout<<endl;
	system("PAUSE");
	return EXIT_SUCCESS;
	
}

