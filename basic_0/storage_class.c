#include<stdio.h>


int sum =78;  //global variable;     //initially assigned to zero

int myfun(int a, int b)
{
	extern int sum;
	//sum = a+ b;
	return sum;
}






int main()
{
  //Decleration telling the compliler what it is. (no space reserved)
  //Definition of the var or fun + space reserved.
    //int sum = myfun(3,5);
	printf("The sum is %d\n",sum);
  

  return 0;



}




