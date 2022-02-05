#include<stdio.h>
//write a probgran to write the fibonnachi series
//0,1,1,2,3,5,8,13,21................

int fibbo(int num)
{//write the logic
  int start = 0;
  int second = 1;
  int sum ;

  if(num ==0)
  {
  	printf("%d\n",0);
  }

  else if (num == 1)
  {
  	printf("%d\n",1);
  }
  
  else
  {
    for(int i = 0; i<num ; i++)
    	if (i== 0)
    	{
    		printf("%d\n",start);

    	}
    	else if (i ==1)
    	{
    		printf("%d\n",second);
    	}
    	else
    	{
    		sum = start + second;
    		start = second;
    		second = sum;
    		printf("%d\n",start);
    	}

  }

}






int main()
{	
    int num, result;
    printf("Enter the number\n");
    scanf("%d",&num);
	fibbo(num);

	return 0;
}

