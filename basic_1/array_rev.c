#include<stdio.h>
#include<string.h>


//reverse the string here 

void array_rev(char *arr)
{
	char rev_arr[10];

	for(int i =strlen(arr) ; i<=strlen(arr); i--)
	{

		printf("%c", arr[i]);
	
	}
	
	printf("\n");


}
int main()
{
	char test_arr[100] = "make a reverse of the array";
	puts(test_arr);

	array_rev(test_arr);



	return 0;
}