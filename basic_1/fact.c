#include <stdio.h>

// to write a factorial program with iteration and the recursive approach

int factorial_loop(int num)
{
	int fact=1;
	if (num == 0)
		return 1;

	else

	while(num>=1)

	{
		
		fact = num * fact ;
		num-=1;

	}

	return fact;

}



int main()
{
	int num;
	printf("Enter the value of the number\n");
	scanf("%d",&num);
	int new;
	
	new =factorial_loop(num);

	printf("%d\n",new);
	
	return 0;

}
