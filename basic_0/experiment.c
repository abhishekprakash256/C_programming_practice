#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>




struct sequence{
   
  char lhs[10];          //for LHS value

  char rhs[10];            //for RHS value, can be const, register, and operation
  

  struct sequence* next; 
} ;


void traverse_CGF(struct sequence* ptr)
{
  
while(ptr!=NULL)

  {//printf("hello");
  printf("the value is %s\n" ,ptr->lhs);
  printf("the value is %s\n", ptr->rhs );

  
  ptr = ptr->next;
 }
}      

/*
void insert_seq(struct sequence *head, char x[10], char y[10])
{
  
  struct sequence *ptr = (struct sequence*)malloc(sizeof(struct sequence));
  //struct sequence  *p= head;
  //ptr-> lhs = *x;
  
  //struct sequence *head;
  //head= (struct sequence*)malloc(sizeof(struct sequence));

  struct sequence  *p= head;
  strncpy(ptr->lhs,x,10);
  //ptr-> rhs= *y;
  strncpy(ptr->rhs,y,10);
  while(p->next!= NULL)
  {
    p = p->next;

  }
  p->next = ptr;
  ptr->next = NULL;
  //return head;
}




    //struct sequence *head;
	//head= (struct sequence*)malloc(sizeof(struct sequence));




//head= (struct sequence*)malloc(sizeof(struct sequence));
int main()
{

    //insert_seq(head, "t", "h");

    //struct sequence  *p= head;

    struct sequence *head;
	head= (struct sequence*)malloc(sizeof(struct sequence));
	

    insert_seq(head, "hj", "NULL");
    //insert_seq(head, "df", "name");


    traverse_CGF(head);

	//printf("hello\n");

	return 0;
}

 */


void insert_seq(struct sequence *head, char x[10], char y[10])
{
  
  struct sequence *ptr = (struct sequence*)malloc(sizeof(struct sequence));
  
  struct sequence  *p= head;

  strncpy(ptr->lhs,x,10);


  strncpy(ptr->rhs,y,10);

  while(p->next!= NULL)
  {
    p = p->next;

  }
  p->next = ptr;
  ptr->next = NULL;

}

   void push_new(struct sequence* head, char x[10], char y[10]) {
    struct sequence * current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    /* now we can add a new variable */
    current->next = (struct sequence *) malloc(sizeof(struct sequence));
    //current->next->val = val;
     strncpy(current->lhs,x,10);


     strncpy(current->rhs,y,10);
   
    current->next->next = NULL;
      //current->next = NULL;
   }


    void insert_new(struct sequence *head, char x[10], char y[10])
    {
            /* Iterate through the list till we encounter the last node.*/
    	    struct sequence *ptr = (struct sequence*)malloc(sizeof(struct sequence));
            ptr->next = (struct sequence *)malloc(sizeof(struct sequence));
            while(ptr->next!=NULL)
            {
                    ptr = ptr -> next;
            }
     
            /* Allocate memory for the new node and put data in it.*/
     
            //ptr->next = (struct sequence *)malloc(sizeof(struct sequence));
            ptr = ptr->next;
            

            strncpy(ptr->lhs,x,10);


            strncpy(ptr->rhs,y,10);

            //ptr->data = data;
            

            ptr->next = NULL;
    }






//void push_head(struct sequence* head, char x[10], char y[10]) 
//{ 
    /* 1. allocate node */
   // struct sequence* new_node = (struct sequence*) malloc(sizeof(struct sequence)); 
   
    /* 2. put in the data  */
    //new_node->data  = new_data;

    //strncpy(new_node->lhs,x,10); 
   
    /* 3. Make next of new node as head */
    //new_node->next = (*head_ref);

     //strncpy(new_node->rhs,y,10);

   
    /* 4. move the head to point to the new node */
    //(head)    = new_node; 
//} 

 

struct sequence *head = NULL;
 


int main()
{

    
    
    //struct sequence *head;
	head= (struct sequence*)malloc(sizeof(struct sequence));
	
    //push_head(head, "head", "head");
    

    //insert_seq(head, "First", "first");
    //insert_seq(head, "df", "name");
    
    push_new(head, "first", "first");

    push_new(head, "second", "second");
    
    //insert_new(head, "second", "second");
    //insert_seq(head, "d", "ne");
    
   


    traverse_CGF(head);

	//printf("hello\n");

	return 0;
}
