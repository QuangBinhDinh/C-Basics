#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int nguyento(int n);//khai bao ham kiem tra so nguyen to
int hoanhao(int n);//khai bao ham kiem tra so hoan hao
int main()
{
	int i,n;
	double z,z1,z2;//bien z dung de lay can bac hai
	cin>>n;
	for(i=2;i<=n;i++)
	{
		if(nguyento(i)==1)
	    {
	    	cout<<i<<" ";
	    }
	    else continue;
	}	
	cout<<endl;
	for(i=2;i<=n;i++)
	{
	    if(hoanhao(i)==1)
	    {
	    	cout<<i<<" ";
	    }
	    else continue;
	}
	cout<< endl;
	for(i=2;i<=n;i++)
	{
		z=sqrt(i);
		z1= modf(z,&z2);//ham lay phan thap phan z1 cua bien z
		if(z1==0)
		{
			cout<<i<<" ";//in ra so chinh phuong neu can bac 2 cua so do la so nguyen
		}
	}
	return 0;
}
int nguyento(int n)
{
	int i,j;
	j=1;
	if(n==2||n==3)
	{
	    j=1;//mac dinh 1 la so nguyen to
	}
	else
	{
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				j= 0;//neu n chia het cho 1 so nao do thi tra ve 0 la hop so
			}
			else continue;
		}
	}
	if(j==0)
	{
		return 0;
	}
	else return 1;
}
int hoanhao(int n)
{
	int i,j,k,a[500],tong;//mang a chua cac uoc so cua n
	j=0;tong=0;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			a[j]=i;//luu cac gia tri la uoc so cua n vao 1 mang
			++j;
		}
		else continue;
	}
	for(k=0;k<j;k++)
	{
		tong+=a[k];//tinh tong cac phan tu trong mang uoc so
	}
	if(tong==n)
	{
		return 1;//tra ve 1 neu tong do chinh bang tham so da cho -> la so hoan hao
	}
	else return 0;	
}


