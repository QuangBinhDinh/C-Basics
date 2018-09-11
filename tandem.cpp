#include<iostream>
#include<iomanip>
#include<vector>
#include<cstdlib>
#include<string>
using namespace std;
typedef struct num
{
	int a;
	int b;

} num;
int main()
{
	int x,y,i,a2,b2;
	int p,q,r;
	int *count;//bien dem chua so lan lap lai
	bool quit;
	num z[100];
	cin>>x>>y;//x la so ky tu toi da trong string, y la so test
	count= new int[y];
	string text,word, word1;
	while(text.size()!=x)
	{
		cin>>text;
	}
    for(i=0;i<y;i++)
    {
    	cin>>a2>>b2;
    	z[i].a=a2;count[i]=1;
    	z[i].b=b2;
	}
	for(i=0;i<y;i++)
	{
	    quit=false;
		p=z[i].a;q=z[i].b;r=q-p+1;//p,q la  vi tri cua xau con
		word.assign(text,p-1,r);//lay xau con tu vi tri da cho trc cho vao string word
		while(!quit)
		{
			p=q+1;q=p+r-1;//thay doi vi tri cua p q
			word1.assign(text,p-1,r);//ay xau con la xau ke tiep 
			if(word==word1)//kiem tra 2 xau xem giong nhau k
			{
				++count[i];//tang bien dem len 1;
				
			}
			else quit=true;//neu khong giong nhau thi thoat vong lap	
		}
		cout<<count[i]<<endl;
	}

	return 0;
}
