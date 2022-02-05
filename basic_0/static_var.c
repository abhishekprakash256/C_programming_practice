#include<stdio.h>

int loc = 56;                      //global variable


int fun(int a )                         //a function is made to check case
{   int loc = 12;                       //loc globale variable
	static int myvar = 5;               //static varibale is initialized
    //printf("%d\n", loc);
    myvar ++ ;
    printf("the value of my var is %d\n", myvar);     
	return a*10 + myvar;
}




int main()
{  int b = 34;
   int val = fun(b);
    val = fun(b);
    val = fun(b);              //value is updated evertime
    val = fun(b);
    
    int *ptr = &val ;
    //printf("%d\n", loc);
	//printf("%d\n", val);
	return 0 ;
}



