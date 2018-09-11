#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	float a[5],sum,temp;
	int i,j;
	for(i=0;i<5;i++){
		cin>>a[i];
	}
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
			if(a[i]>=a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	sum = a[0] +a[4];
	cout<<sum;
	return 0;
}

