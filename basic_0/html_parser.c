#include<stdio.h>
#include<string.h>

void parser(char *string)                  //function initilization
{
	int n= 0;
	int start = 0;
	for(int i =0; i < strlen(string); i++)
	{ if (string[i] == '<' )                        //checking cases for entering the string
       {
         n=1;
         continue;

       }
       else if (string[i]== '>')                   //checking the exit of the string
        {
        	n=0;
        	continue;
        }
        if (n==0)
        {
          string[start]= string[i];
          start++;        	
        }    

	}

	string[start]= '\0';                               //assigning the last as '\0'
	

	while(string[0] == ' ')                           //checking for space and removing it
	{ 
		for(int i = 0;i < strlen(string); i++)        
		
		{
			string[i]= string[i+1];                     //assigning the value to next string
		}


	}
	while(string[strlen(string)-1] == ' ')                   //removing the value
	{
		string[strlen(string)-1] = '\0';                     //assigning the 

	}


	
}

int main()
{
    char string[]= "<h1>    This is a text    <h1>";
    parser(string);
    printf("~~%s~~\n", string );
	return 0 ;
}





