#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int ucln(int &a,int &b);
int main()
{
	int a,b,bcnn;
	cin>>a>>b;
	bcnn=(a*b)/ucln(a,b);
	cout<<bcnn;
	return 0;
}
int ucln(int &a, int &b)
{
	int tam;
	tam=(a>b)? a-b:b-a;//tam la hieu cua a va b
	while(a%tam!=0&&b%tam!=0)
	{
		if(a>b)//thay gia tri lon hon trong a va b bang hieu cua phep tinh tren
		{
			a=tam;
		}
		else b=tam;
		tam=(a>b)? a-b:b-a;
	}
	return tam;
}
