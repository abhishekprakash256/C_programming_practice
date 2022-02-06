#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct my_struct

{
	char first[20];
	char last[20];
	int age;

}
;


int main()

{

	//storing the data 
	struct my_struct Abhi;

	Abhi.age = 25;

	strcpy(Abhi.first, "Abhi");

	strcpy(Abhi.last, "Prakash");


	printf("%s\n" ,Abhi.first);

	return 0 ;
}