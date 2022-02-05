#include<stdio.h>

int main()
{
//let's make a array

int array[10] = {1,2,3,5,6,7,5,7};
printf("%d\n",array[2])	;

int *ptr = array;

printf("%d\n", *ptr+1); // this is pointing to the array elemet zero

	return 0;

}

