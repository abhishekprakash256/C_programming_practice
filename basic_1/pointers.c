#include<stdio.h>
int main()
{
	printf("Let's make a pointer\n");
	int a = 7;
	int *ptr = &a; //storing the address of a in ptra
	printf("To print the value %d\n",*ptr ); // through pointer
	printf("To print the value of %d\n",a);  // throufgh the value of a
	printf("To print the value of %p\n",&ptr);

	return 0;
}
