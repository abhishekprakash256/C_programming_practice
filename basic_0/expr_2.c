#include<stdio.h>
#include<string.h>


int main( int argc, char *argv[10] )  {

  
   char val_1[10]= "--cp";
   char val_2[10] = "--cse";
   int result, result_2;
   //result=  strcmp("--cp", val_1);

   result = strcmp(argv[1], val_1);
   result_2 = strcmp(argv[1], val_2);
  
  if(argc == 2) {

      printf("The argument supplied is %s\n", argv[1]);
      
      if (result == 0)
         {
         	printf("first\n");
         }
      else if (result_2 == 0)

       {

       	printf("Second\n");
       }

      printf("the value of result is %d\n", result);
   }
   else if( argc > 2 ) {
      printf("Too many arguments supplied.\n");
   }
   else {
      printf("One argument expected.\n");
   }
}



/*
#include <stdio.h>
 
const int MAX = 4;
 
int main () {

   char *names[] = {
      "Zara Ali",
      "Hina Ali",
      "Nuha Ali",
      "Sara Ali"
   };
   
   int i = 0;

   for ( i = 0; i < MAX; i++) {
      printf("Value of names[%d] = %s\n", i, names[i] );
   }
   
   return 0;
}



*/

