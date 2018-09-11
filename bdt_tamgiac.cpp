#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,p;
	cin>>a>>b>>c;
	if(a+b<=c||a+c<=b||b+c<=a)//kiem tra dieu kien co ban cua tam giac
	{
		cout<<"Invalid";
	}
	else
	{
		p=a+b+c;
		if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
		{
			cout<<p<<endl;
			cout<<"vuong";
		}
		else if((a==b&&b!=c)||(a==c&&c!=b)||(b==c&&c!=a))
		{
			cout<<p<<endl;
			cout<<"can";
		}
	    else if(a==b&&b==c)
	    {
	    	cout<<p<<endl;
	    	cout<<"deu";
	    }
		else
		{
			cout<<p<<endl;
			cout<<"thuong";
		}
	}
	return 0;
}
