#include<iostream>
using namespace std;
class grand{
	public:
	   int age;
	
	void getage(int a){
		age=a;
	}
	void putage(){
		cout<<"\nage"<<age;
	}
};
class parents{
    public:
		string name;
		
		void getname(string n){
			name=n;
		}
	void putname(){
		cout<<"\nname"<<name;
	}	
};
class child{
	public:
		string gender;
		
		void getgender(string g){
			gender=g;
		}
		void putgender(){
			cout<<"\ngender"<<gender;
		}		
};

int main(){
	child c;
	
	c.getage(34);
	c.getname("zyx");
	c.getgender("male");
	
	c.putage();
	c.putname();
	c.putgender();
	
	return 0;
}
