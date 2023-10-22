#include<stdio.h>
#include<string.h> 

struct student{
	int rollnum;
	char name[100];
	float cgps;
};

int main(){
	struct student first;
	first.rollnum=12828;
	first.cgps=7.21;
	strcpy(first.name,"trushti");
	
	printf("student rollnum=%d\n", first.rollnum);
	printf("student cgps=%f\n", first.cgps);
	printf("student name=%s\n", first.name);
	return 0;
}
