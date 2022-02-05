#include<stdio.h>
#include"random_gen.c"

//winning function---------------------------------------------
int win_rule(int a, int b)
{
    
  // 0- rock, 1- paper, 2- scissor
	// player_1 = 1 and player_2 = 

	if ( a == 0 && b == 1 )         //rock vs paper
	{
		return 2;                //return player won
	}
    else if (a== 1 && b == 0)      //paper vs rock
    {
    	return 1;
    }
    else if (a == 0 && b == 2)       //rock vs scissor 
    {
    	return 1;
    }

    else if (a == 2&& b == 0 )       //scissor  vs rock
    {
    	return 2;
    }
    
    else if( a == 2 && b == 1 )  //paper vs scissor
    {
       return 2;
    }
     else if( a == 1 && b == 2 )  //scissor vs paper
    {
       return 1;
    }

    else 
    {
    	return 0;
    }	
}

int last_win(int a, int b)
{
	if(a>b)
	{
		return 1;
	}
	else if (a<b)
	{
		return 2;
	}
	else
	{
		return 0;
	}
}

void choices(int x)
{
  if(x==0)                                 // 0- rock, 1- paper, 2- scissor
  {
  	printf("You chooose Rock\n");
  } 
 else if(x== 1)
 {
 	printf("You choose Paper\n");
 }
else
{
	printf("You choose Scissor\n");
} 



}




int main()
{
	//printf("Random number is %d\n",generate_random_num());
    int a, b ,count_1 =0, count_2=0;
    for(int i = 0;i <3 ; i ++)
    {
    	printf("Enter the number 0 - rock, 1- paper , 2 - scissor\n");
    	scanf("%d",&a);
    	choices(a);
        b = generate_random_num();
       
        printf("%d\n",b);
        choices(b);
        if (win_rule(a,b) == 1)
        { 
           count_1 +=1; 
        } 

        else if (win_rule(a,b)== 2)
        {
        	count_2+=1;
        }
        else
        {
        	count_1+=0;
        	count_2+=0;
        }

        //printf("%d\n", win_rule(a,b));

    	//printf("%d\n", a);
        }
     if(last_win(count_1,count_2) == 1)
     {
        printf("Player_1 won\n");
     } 
     else if(last_win(count_1,count_2)== 2)
     {
     	printf("Player_2 won\n");
     	
     }   
     else 
     {
     	printf("Draw\n");
     	
     }     
    	return 0;
    }


    //printf("%d\n",generate_random_num());
	//printf("%d\n", win_rule(2 ,1));
	



// create a rock paper scissor game 
//Play 3 times with the computer and log the score and which wins display the name
//display the name of the user in the end
