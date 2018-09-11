#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s0 ("Fuck you!");
	string s1(s0);
	string s2(s0,0,4);
	string s3(s0,4);
	cout<<s1<<endl<<s2<<endl<<s3;
	return 0;
}
