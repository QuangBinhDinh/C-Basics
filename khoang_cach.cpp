#include<iostream>
#include<iomanip>
#include<cmath>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,*a,x,i,j,min;
	cin>>n;
	a= new int[n];
	for(i=0;i<n;i++)
	{
		cin>>*(a+i);
	}
	min=*(a+1)-*(a+0);min=abs(min);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			x=*(a+j)-*(a+i);
			x=abs(x);
			min=(x<=min)? x:min;
		}
	}
	cout<<min;
}
