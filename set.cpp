#include<iostream>
#include<set>
#include<map>
#include<vector>
using namespace std;
int main()
{
    map<char,int> mymap;
    map<char,int>:: iterator it;
    mymap.insert(pair<char,int>('n',5));
    mymap.insert(pair<char,int>('p',4));
	mymap.insert(pair<char,int>('d',9));
	mymap.insert(pair<char,int>('v',1));
    it=mymap.begin()+1;
    cout<<it->first<<" "<<it->second;
	return 0;
}
