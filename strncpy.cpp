#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[10],t[10]="Steven";
	strncpy(s,t+0,5);//bat dau sao chep tu ki tu thu 2 cua tu "Steven", tuc la 't'
	s[5]='\0';//phai co ky tu ket thuc o xau moi dc sao chep
	cout<<s<<" is brother of "<<t<<endl;
	strncpy(s+5,t+5,1);//bat dau sao chep tu ki tu cuoi cung va gan vao sau ki tu thu 5 cua xau s
	s[6]='\0';
	cout<<s;
	return 0;
  	
}
