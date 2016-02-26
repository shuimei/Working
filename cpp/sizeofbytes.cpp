#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	short a0=0;
	int a1=1;
	long a2=2L;
	char c='C';
	float d0=1.23F;
	double d1=4.56;
	bool b=true;
	cout<<"short: "<<sizeof(short)<<'\t'<<"0: "<<sizeof(0)<<endl;
	cout<<"int: "<<sizeof(int)<<'\t'<<"1: "<<sizeof(1)<<endl;
	cout<<"long: "<<sizeof(long)<<'\t'<<"2L: "<<sizeof(2L)<<endl;
	cout<<"char: "<<sizeof(char)<<'\t'<<"C: "<<sizeof('C')<<endl;
	cout<<"float: "<<sizeof(float)<<'\t'<<"1.23F: "<<sizeof(1.23F)<<endl;
	cout<<"double: "<<sizeof(double)<<'\t'<<"4.56: "<<sizeof(4.56)<<endl;
	cout<<"bool: "<<sizeof(bool)<<'\t'<<"true: "<<sizeof(true)<<endl;
}

