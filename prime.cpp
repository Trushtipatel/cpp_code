#include<iostream>
using namespace std;
int main(){
	int n, div=2, flag=0; 
	
	cout<<"enter the num";
	cin>>n;
	
	while(div<n){
		if(n%div== 0 ){
			flag=1;
			break;
		}
		div++;
	}
	if(flag==0)
	cout<<n<<"prime num";
	else
	cout<<n<<"not prime num";
}
