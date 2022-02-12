/*
The scope of the variable 
*/
#include<stdlib.h>
#include<stdio.h>

int var = 2;


void add(int number)
{
	printf("%d\n" ,var+1);
}


int main()
{

	printf("%d\n", var);
	add(var);
}