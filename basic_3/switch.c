#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int calc(char operator[], int num0, int num1)
{

	if (strcmp(operator, "add") == 0)
	{
		return (num0 + num1);
	}

}







int main()

{
	char ops[10];

	int num1, num0;

	printf("Enter the num 0\n");
	
	scanf("%d",&num0);

	printf("Enter the num 0\n");
	scanf("%d",&num1);

	printf("the value is %d %d\n", num0,num1);

	printf("Enter the opertaion\n");
	scanf("%s",ops);

	printf("the value is %s\n", ops);


	printf("%d\n",calc(ops, num0, num1));

	return 0;





}