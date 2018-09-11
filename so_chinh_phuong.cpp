#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int n;
	float x,y,z;
	cin>>n;
	if(n<0)
	{
		cout<<"NO";
	}
	else
	{
		x=sqrt(n);
		y=modf(x,&z);//ham lay phan thap phan y voi tham so x la gia tri truyen vao, z la phan nguyen
		if(y==0)
		{
			cout<<"YES";
		}
		else cout<<"NO";
	}
	return 0;
}
