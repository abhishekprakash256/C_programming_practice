#include<stdio.h>


int *myfun()
{ 
  int a= 34;
   
   return &a;
}




int main()
{

   int *ptr = myfun();


   printf("The value is %d\n", *ptr); //here the value of the dangking pointer is destroyed

   return 0;
}



