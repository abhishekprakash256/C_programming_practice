#include<stdio.h>


int main()
{ 
	int a;
	float b = 6.7;
	a= 45;
	void *ptr;    //making a void pointer
	void *ptr_2;
	ptr = &a;     //assigning the address
	ptr_2 = &b;


    printf("The value of a is %d\n",(*(int* )ptr));  //type casting as well as defrencing the pointer
    printf("The value of a is %f\n",(*(float* )ptr_2));
	return 0;
}

