#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int i,j,n;
	char c='*',s=' ';
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i-1;j++)
		{
			cout<<s;
		}
		for(j=i;j<=n;j++)
		{
			cout<<c;
		}
		cout<<endl;
	}
	return 0;
}
