#include <iostream>
using namespace std;
 int main(int argc, char *argv[])
 {
 	cout<<"input yanghui traingle line number[1~10]:"<<endl;

 	int n;
 	cin>>n;
 	int a[20]={0},b[20]={0};
 	for (int i=0;i<n;i++)
 	{
 		b[0]=1;
 		b[i]=1;
 		for (int j=1;j<i;j++)
 		{
 			b[j]=a[j]+a[j-1];
 		}
 		for(int j=0;j<n-i-1;j++)
 		{
 			cout<<" ";
 		}
 		for (int j=0;j<=i;j++)
 		{
 			if(j>0) cout<<" ";
 			cout<<b[j];
 		}
 		cout<<endl;

 		for (int j=0;j<=i;j++)
 		{
 			a[j]=b[j];
 		}
 	}
 	return 0;
 }