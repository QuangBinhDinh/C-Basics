#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int generateRandomNumber();
int main()
{
	int a;
	a=generateRandomNumber();
	cout<<a;
	return 0;
}
int generateRandomNumber()
{
	int x;
	x=rand();
	return x;
}
