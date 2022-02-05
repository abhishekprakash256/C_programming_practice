#include<stdio.h>
int main()
{
	int a = 7;
	int *ptr = &a;

	printf("The value of %d \n", ptr);
	 //adding or subtracting one size of the int
    ptr = ptr-1;
	printf("The value of %d \n", ptr);

	printf("The value of %d \n", *ptr);


	return 0;
}

