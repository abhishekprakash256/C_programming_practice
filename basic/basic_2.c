/*
The need of the data types int 
double and long double
*/

#include<stdlib.h>
#include<stdio.h>


int main()

{
	int var_0 = 3.74584957;
	double var_1 = 3.7349743895689258;
	long double var_2 = 3.7834823654259395285;
	float var_3 = 3.7854765826757;

	printf("%d\n", var_0);
	printf("%.10f\n", var_1);
	printf("%.18LF\n", var_2);
	printf("%f\n", var_3);

}