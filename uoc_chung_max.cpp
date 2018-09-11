#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int a,b,tam;
	cin>>a>>b;
	a=abs(a);b=abs(b);
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
	cout<<tam;
	return 0;
}

