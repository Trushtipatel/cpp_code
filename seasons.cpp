#include<iostream>
using namespace std;
int main(){
	int d;
	string m;
	
	cin>>m>>d;
	if((m == "march" && d>=20 && d<=31) || (m== "april" && d<=30) || (m== "may" && d<=31) || (m== "june" && d<=20)){
       cout<<"spring";		
	}else if((m== "june" && d>=21 && d<=30) || (m== "july" && d<=31) || (m== "august" && d<=31) || (m=="september" && d<21)){
		cout<<"summer";
	}else if((m== "september" && d>=22 && d<=30) || (m== "october" && d<=31) || (m== "november" && d<=30) || (m=="december" && d<=20)){
		cout<<"autumn";
	}else if((m== "december" && d>=21 && d<=31) || (m== "january" && d<=31) || (m== "february" && d<=29) || (m=="march" && d<=19)){
		cout<<"winter";
	}else {
		cout<<"invalid";
	}
}
