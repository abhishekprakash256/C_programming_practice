#include<stdio.h>

int main()
{
   int a = 45;
   int *ptr = &a;  
   int *ptr_2 = NULL;
  printf("The value of a is %d\n", *ptr);

  if(ptr_2!=NULL)

  printf("The value of b is %d\n", *ptr_2);    //segmentation core fault dumped when you point to a NULL pointer.


  else
  {
  	printf("The pointer is a null pointer and can not be defrrenced\n");
  } 

  return 0;
}





