#include<stdio.h>
#include<string.h>

int main()
{

	char first[] = "Abhishek";
	char second[] = "Prakash";
	char add[50] ;

	printf("the len of string is %lu\n", strlen(first));
	puts(first);
	strcpy(add,strcat(first,second)); 
	puts(add);



	return 0;
}

