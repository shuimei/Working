#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	cout<<"________计算圆的周长和面积______________"<<endl;
	cout<<endl;
	const double PI = 3.1415926;
	double radius = 0;
	cout<<"请输入圆的半径"<<endl;
	cin>>radius;
	cout<<"周长"<<2*PI*radius<<endl;
	cout<<"面积"<<PI*radius*radius<<endl;

	cout<<endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
