#include<stdio.h>

/* print start by taking the input as 0 or 1 as 0 for reverse and 1 for increasing
pattern as
*
**
***
****
by taking also the number of stars you want to print
*/


int main()
{
int set, num;
printf("Enter 0 for upward or 1 for downward patternn\n");
scanf("%d",&set);
printf("Enter the number of stars you want\n");
scanf("%d",&num);

if (set == 0 )
{
 for(int i =0 ; i<num; i++)
 {
 	for(int j=0; j<=i;j++)
 	{
 		printf("*");
 	}
 	printf("\n");
 }


}

else
{
	for(int i=0; i<= num ;i++)
	{
		for(int j=i; j<num ; j++)
		{
			printf("*");
		}
	printf("\n");
}

}

	return 0;
}
