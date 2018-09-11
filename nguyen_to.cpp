#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int i,n,j;
	j=1;//mac dinh j=1 la so nguyen to, j=0 la hop so
	cin>>n;
	if(n==2||n==3)
	{
		j=1;//khong doi gia tri cua j
	}
	else 
	{
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				j=0;//n la hop so va ket thuc vong lap
				break;
			}
			else continue;//neu khong tim thay uoc so thi vong lap se chay het va gia tri j se khong doi
		}
	}
	if(j==0)
	{
		cout<<"no";//voi truong hop la hop so, ghi la "no"
	}
	else cout<<"yes";//voi truong hop la so nguyen to, ghi la "yes"
	return 0;
}
