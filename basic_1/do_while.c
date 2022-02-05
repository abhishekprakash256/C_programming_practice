#include<stdio.h>

int main()
{
//use the do while loop

int num , index;
num = 20;

printf("Enter the number\n");
scanf("%d",&index);

do {
index +=1;
printf("%d\n", index);

}	

while(index < num);

}



