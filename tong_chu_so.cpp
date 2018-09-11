#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	int a[50],n,tam,i=0,j,tong=0;//i la bien dem cua mang a[50]
	cin>>n;
	tam=n;
    while(tam!=0)//vong lap lay tung chu so mot cua so da cho
    {
    	a[i]=tam%10;//lay phan du cua so da cho
    	tam/=10;
    	++i;
    }
	for(j=0;j<i;j++)
	{
		tong+=a[j];
	}
	cout<<tong;
	return 0;
}
