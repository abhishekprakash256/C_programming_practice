#include<stdio.h>
#include<stdlib.h>
#include<time.h>                   //for random function

int generate_random_num()
{
	srand(time(NULL));                       //for making the random number
    return rand()%3;

}


