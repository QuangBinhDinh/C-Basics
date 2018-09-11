#include<iostream>
using namespace std;
int main()
{
	int a[10],i,max;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	for(i=1;i<10;i++)
	{
		max=(a[i]>=max) ? a[i]:max;
	}
	cout<<max<<endl;
	return 0;
}
