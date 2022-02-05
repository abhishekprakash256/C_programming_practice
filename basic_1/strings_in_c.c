#include<stdio.h>

int main()
{
	//char my_name[] = {'A','b','h','i','s','h','e','k', '\0'};
	char my_name[] = "Abhishek";
 	for(int i =0; i < 100; i++)
	{
		if (my_name[i] != '\0')
		{			
		printf("%c",my_name[i] );
	    }
	    else 
	    	break ;
	}


	printf("\n");

	puts(my_name);

	return 0;
}




