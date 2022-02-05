#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct  Node
{
	int data;
	char lhs[10];
	char rhs[10];
	struct  Node *next;
	
};

void linkedlisttraversal(struct Node *ptr)
{   while(ptr!=NULL)
	{
	printf("The data of element is %d\n",ptr->data);
	printf("the char is x %s\n", ptr-> lhs);
	printf("the char is x %s\n", ptr->rhs);
	ptr= ptr->next;
    }
}

/*struct Node *insertatfirst(struct Node *head, int data)
{

	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->next = head;
	ptr->data = data;
	return ptr;
} */


/*struct Node *insertatbetween(struct Node *head, int data, int index)
{

	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	struct Node  *p= head;
	int i = 0;
	while(i!= index-1)
	{
		p = p->next;
		i++;

	}
	ptr->data = data;
	ptr->next= p->next;
	p->next = ptr;	
	return head;

} */
struct Node *insertatend(struct Node *head, int data, char x[10], char y[10])
{

	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	struct Node  *p= head;
	ptr->data = data;
	//ptr-> lhs = *x;
	strncpy(ptr->lhs,x,10);
	//ptr-> rhs= *y;
	strncpy(ptr->rhs,y,10);
	while(p->next!= NULL)
	{
		p = p->next;

	}
	p->next = ptr;
	ptr->next = NULL;
	return head;

}

int main()
{
	struct Node *head;
	head= (struct Node*)malloc(sizeof(struct Node));
	
	//head = insertatfirst(head, 34);
	//head = insertatbetween(head, 69,2);
	head = insertatend(head, 8 ,"name", "g");
	head = insertatend(head, 5 ,"k", "j");
	head = insertatend(head,7, "mine", "hack");
	linkedlisttraversal(head);

     
	return 0;
}

/*

#include<stdio.h>
#include<stdlib.h>

struct  Node
{
	int data;
	struct  Node *next;
	
};

void linkedlisttraversal(struct Node *ptr)
{   while(ptr!=NULL)
	{
	printf("The data of element is %d\n",ptr->data);
	ptr= ptr->next;
    }
}

struct Node *insertatfirst(struct Node *head, int data)
{

	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->next = head;
	ptr->data = data;
	return ptr;
}

struct Node *insertatbetween(struct Node *head, int data, int index)
{

	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	struct Node  *p= head;
	int i = 0;
	while(i!= index-1)
	{
		p = p->next;
		i++;

	}
	ptr->data = data;
	ptr->next= p->next;
	p->next = ptr;	
	return head;

}
struct Node *insertatend(struct Node *head, int data)
{

	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	struct Node  *p= head;
	ptr->data = data;
	while(p->next!= NULL)
	{
		p = p->next;

	}
	p->next = ptr;
	ptr->next = NULL;
	return head;

}

int main()
{
	struct Node *head;
	struct Node *second;
	struct Node *third;
	head= (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third =(struct Node*)malloc(sizeof(struct Node));
	head->data= 7;
	head->next= second;
	second->data = 11;
	second->next= third;
	third->data = 4;
	third->next= NULL;
	head = insertatfirst(head, 34);
	head = insertatbetween(head, 69,2);
	head = insertatend(head,8);
	linkedlisttraversal(head);

     
	return 0;
}

*/



