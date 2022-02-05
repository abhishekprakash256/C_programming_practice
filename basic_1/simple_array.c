#include<stdio.h>
void fun(int array[])
{
	for(int i =0; i<=4;i++)
	{
		printf("%d\n",array[i] );
	}
}
int main()
{
	int arr[5] = {1,2,3,4,5};
	fun(arr);
	return 0;
}
