#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int n,i,j,x;
	long a[500];
	cin>>n;
	a[0]=1;
	a[1]=1;
	for(i=2;i<=500;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for(i=0;i<100;i++)
	{
		cout<<a[i]<<" ";
	}
	for(i=0;i<500;i++)
	{
		if(n==a[i])
		{
			x=1;
			cout<<"Thuoc day Fibonacci"<<endl;
			for(j=0;j<=i;j++)
			{
				cout<<a[j]<<" ";
			}
			
		}
		else x=0;
	}
	
	return 0;
}
