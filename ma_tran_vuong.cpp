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
    	for(j=1;j<=n-i;j++)
    	{
    		cout<<s;
    	}
    	for(j=n-i+1;j<=n+i-1;j++)
    	{
    		cout<<c;
    	}
    	for(j=n+i;j<=2*n-1;j++)
    	{
    		cout<<s;
    	}
    	cout<<endl;
    }
	return 0;
}
