#include<iostream>
using namespace std;
int main(){
	int r,n,num,ans=0;
	cout<<"enter the num ";
	cin>>n;
	n=num;
	
	while(n!=0){
		r=n%10;
		ans=ans+r*r*r;
		n=n/10;
	}
	if(ans==num)
	cout<<"this is armstrong ";
	else
	cout<<"this is not armstrong ";
}
