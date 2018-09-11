#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
using namespace std;
string renew(string p);
int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    cout<<renew(a)<<endl;
    cout<<renew(b)<<endl;
    return 0;
}
string renew(string p)
{
    string *ch,pp;
	ch= new string[100];    
    int i;
    for(i=0;i<p.size();i++)//chuyen cac ki tu trong string ra mang de tien so sanh
    {
        ch[i].assign(p,i,1);
    }
    for(i=0;i<p.size()-1;i++)
    {
        if(ch[i]!=ch[i+1]) pp.append(ch[i]);
        else continue;
    }
    pp.append(p.end()-1,p.end());//gan ky tu cuoi cung 
    return pp;
}
