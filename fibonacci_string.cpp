#include<iostream>
#include<iomanip>
#include<math.h>
#include<string.h>

using namespace std;
int main()
{
	int i;
	char *f[11],*a;
	f[0]= new char[100]; strcpy(f[0],"a");
	f[1]= new char[100]; strcpy(f[1],"b");
	//gan cac ky tu vao 2 string dau tien
	for(i=2;i<11;i++)
	{
		a=new char[100];//khoi tao string tam thoi
		f[i]= new char[100];
		strcpy(a,f[i-1]);//sao chep ky tu cua string truoc do vao string tam 
		strcat(a,f[i-2]);//noi ky tu cua string truoc nua vao string tam
		strcpy(f[i],a);//sao chep lai vao string nay
		delete a;
	}
	for(i=0;i<11;i++)
	{
		cout<<"f("<<i<<")= "<< f[i]<<endl;
	}
	return 0;
}
