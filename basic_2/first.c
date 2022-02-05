#include<stdio.h>

int main(){

	int a;

	a = 6;

	int *p;

	p = &a;

	printf("%d\n", p);

	printf("%d\n", &p);

	printf("%d\n", *p);

	printf("%d\n", &a);

	printf("%d\n", *(p+1));

}