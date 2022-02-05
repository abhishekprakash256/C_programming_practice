#include<stdio.h>
#include<stdlib.h>


//-----------------------------------------------dynamic memory allocation at the run time -------------------------------------------//
//----------------use of malloc 

/*int main()
{   
	int n;
    printf("Enter the size of array you wanna make \n");
    scanf("%d",&n);


	int* ptr;
	ptr = (int*)malloc(n*sizeof(int));
    
    for(int i =0; i< n; i++)
    {
    	printf("Enter the value of that you want to store %d\n",i);
    	scanf("%d", &ptr[i]);
    }

    for(int i =0; i< n; i++)
    {
    	printf("The stored value in the array is %d\n",ptr[i]);
    }




	return 0;
}  */



//---------------------------------------use of calloc-----------------------------------------//

/*int main()
{   
	int n;
    printf("Enter the size of array you wanna make \n");
    scanf("%d",&n);


	int* ptr;
	ptr = (int*)calloc(n,sizeof(int));
    
    for(int i =0; i< n; i++)
    {
    	printf("Enter the value of that you want to store %d\n",i);
    	scanf("%d", &ptr[i]);
    }

    for(int i =0; i< n; i++)
    {
    	printf("The stored value in the array is %d\n",ptr[i]);
    }




	return 0;
}  */ 

//----------------------------------------use of realloc--------------------------------------------------

int main()
{   
	int n;
    printf("Enter the size of array you wanna make \n");
    scanf("%d",&n);

  
	int* ptr;
	ptr = (int*)calloc(n,sizeof(int));
    
    for(int i =0; i< n; i++)
    {
    	printf("Enter the new value of that you want to store %d\n",i);
    	scanf("%d", &ptr[i]);
    }

    for(int i =0; i< n; i++)
    {
    	printf("The stored new value in the array is %d\n",ptr[i]);
    }

    printf("Enter the size of new array you wanna make \n");
    scanf("%d",&n);

    free(ptr);

	ptr = (int*)realloc(ptr ,n*sizeof(int));
    
    for(int i =0; i< n; i++)
    {
    	printf("Enter the value new of that you want to store %d\n",i);
    	scanf("%d", &ptr[i]);
    }

    for(int i =0; i< n; i++)
    {
    	printf("The stored new value in the array is %d\n",ptr[i]);
    }
    
    free(ptr);



	return 0;
} 
