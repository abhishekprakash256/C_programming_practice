/*

#include<stdio.h>

int main()


{
    int m1, n1 , m2 , n2;


	printf("Enter the row number of first matrix\n");      
	scanf("%d", &m1);                                    //number of row stored

	printf("Enter the coloumn number of first matrix\n");      
	scanf("%d", &n1);                                    //number of coloumn stored

    printf("Enter the row number of second matrix\n");      
	scanf("%d", &m2);                                    //number of row stored

	printf("Enter the row number of second matrix\n");      
	scanf("%d", &n2);                                    //number of column stored
     
    //store the value and allocate the memory    //create 2D  array to store value

     int mat1[m1][n1];          //initiliazation of array with m rows and n cloumns

     int mat2[m2][n2];       //initiliazation of array with m rows and n cloumns  

     int mat3[m1][n2];       //calcaulation stored in the matrix 
      
     //taking the input to store the value

     int i,j;

     for(i =0; i < m1 ; i ++)    //number of rows
     {
   
       for(j = 0; j < n1 ; j++) {

        printf("Enter the vaule of %d row and %d coloumn of first matrix\n", i, j);

        scanf("%d", &mat1[i][j]);
       }

     }
    
    //taking input to store the value in matrix 2

    for(i =0; i < m2 ; i ++)    //number of rows
     {
   
       for(j = 0; j < n2 ; j++) {

        printf("Enter the vaule of %d row and %d coloumn of second matrix\n", i, j);

        scanf("%d", &mat2[i][j]);
       }

     }

     //calculation part of the matrix

    if (n1 == m2)            //dimension of the matrix


    {   int sum;
         
       for(i = 0; i < (m1*m1); i++ )       //for outer part

       	sum =0;

       {
        
         for(j= 0 ;j< n1; j++)               //for the inner part

          {

            sum = mat1[i][j] * mat2[i][j] ;                 //main calculation

            sum = sum + mat1[i][j] * mat2[i][j] ;       //sum calculation

         }

         mat3[i][j] = sum;        //assigning the value
       }
       	                              //calculation part 
    } 
    




    else
    
    {

    	printf("Can not be mutiplied mismatch rows and column\n");  //print the error message
    }
    

	return 0;
}   */



#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
system("cls");  
printf("enter the number of row=");    
scanf("%d",&r);    
printf("enter the number of column=");    
scanf("%d",&c);    
printf("enter the first matrix element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}    
printf("enter the second matrix element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    scanf("%d",&b[i][j]);    
}    
}    
    
printf("multiply of the matrix=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
//for printing result    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}    
return 0;  
}  
    


























