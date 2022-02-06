#include<stdio.h>
#include<stdlib.h>

int cube(num)
{
	int cube = num*num*num;

	return cube;
}

int main(){


	printf("the cube of number is %d\n", cube(2));

	return 0;
}