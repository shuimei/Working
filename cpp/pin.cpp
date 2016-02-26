#include <iostream>
using namespace std;
int main()
{
	cout<<"int type pin:"<<endl;
	int a;
	int * pi1=&a;
	int *pi2=pi1+1;
	cout<<"pi1 = "<<pi1<<endl;
	cout<<"pi2 = pi1 + 1 , pi2 = "<<pi2<<endl;
	cout<<"pi2 - pi1 = "<<pi2 - pi1<<endl;
	cout<<"double type pin"<<endl;

	double f;
	double *pf1=&f;
	double *pf2 = pf1 + 1;
	cout<<"pf1 = "<<endl;
	cout<<"pf2 = pf1 + 1, pf2 = "<<pf2<<endl;
	cout<<"pf2 - pf1 ="<<pf2 - pf1<<endl;
	return 0;
}