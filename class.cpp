#include<iostream>
using namespace std;

class student{
	public:
		int rollnum;
		string name;
		
	void studetails(int r, string n){
		rollnum =r;
		name =n;
	}	
		
	void studetails(){
		cout<<"\nrollnum="<<rollnum;
		cout<<"\nname="<<name;
	}	
};

int main(){
	student s1;
	student s2;
	int s1_rollnum, s2_rollnum;
	string s1_name, s2_name;
	
	cout<<"enter the rollnum=";
	cin>>s1_rollnum>>s2_rollnum;
	cout<<"enter the name=";
	cin>>s1_name>>s2_name;
	
	s1.studetails(s1_rollnum,s1_name);
	s2.studetails(s2_rollnum,s2_name);
	s1.studetails();
	s2.studetails();
	
}


