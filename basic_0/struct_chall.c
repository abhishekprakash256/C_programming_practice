#include<stdio.h>
#include<string.h>
 struct driver 
{
	char name[45];

	char state[20];

	char vehicle_name[15];

	int dob;

	int vehicle_number;	
} 
;

int main()
{
    struct driver d1,d2,d3;

    printf("Enter the name of driver\n");
     
    scanf("%s", d1.name);
     
    printf("Enter the name of state\n");
    scanf("%s", d1.state);
    
    printf("Enter the name of vehice\n");
    scanf("%s", d1.vehicle_name);
    
    printf("Enter the year of birth\n");
    scanf("%d", &d1.dob);

    printf("Enter the number of vehicle\n");
    scanf("%d", &d1.vehicle_number);
   
    printf("The name is %s  The state is %s vehicle name  is %s date of birth is %d and vehicle number is %d\n", d1.name, d1.state, d1.vehicle_name, d1.dob, d1.vehicle_number ); 

  
}










