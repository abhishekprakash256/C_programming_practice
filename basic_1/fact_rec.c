#include<stdio.h>
// To make a factorial program with using the recursive method
// this should have a base termination case


int factorial(int num)
{
	if(num == 0)
	{	
		return 1;

	}
	
	else
	{
      return (num*factorial(num-1));
	}

}

int main()
{
	int num;
	printf("Enter the number for factorial\n");
	scanf("%d",&num);
	int val = factorial(num);

	printf("%d\n", val);

	return 0;
}


