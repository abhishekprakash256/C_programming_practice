#include<stdio.h>
#include<stdlib.h>


int main()
{
	say_something("Abhi");
	return 0;
}

void say_something(char name[])
{
	printf("%s\n", name);

}