//ax^2+bx+c//
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float a,b,c,x1,x2,sum,d,total;
	cout<<"enter three num=";
	cin>>a>>b>>c;
    d=b*b - 4*a*c;
        
	if(d>0){
		x1=(-b + sqrt(d)) / (2*a);
		x2=(-b - sqrt(d)) / (2*a);
		cout<<"x1="<<x1<<" x2="<<x2<<endl;
	}  
	else if(d==0){
		x1= -b/(2*a);
		cout<<"x1= x2= "<<x1<<endl;
	} 
	else{
		sum= -b/(2*a);
		total=sqrt(-d)/(2*a);
		cout<<"x1="<<sum<<"+"<<total<<"i"<<endl; 
	    cout<<"x2="<<sum<<"-"<<total<<"i"<<endl; 
	} 
}	
