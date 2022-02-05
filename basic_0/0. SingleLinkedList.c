/*
    WAP to create a linked list and perform Insertions and Deletions of all cases. Write a function to sort and finally
    delete the entire list at once.

    P.S - Every Operation of Single Linked List in One Program

*/
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
    int data;
    struct node *next;
};

struct node *start=NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_node(struct node *);
struct node *delete_after(struct node *);
struct node *delete_list(struct node *);
struct node *sort_list(struct node *);



//Providing options what user wants to do
int main(int argc, char *argv[]){
    int option;
    do{
        printf("\n\n ***********MAIN MENU**************");
        printf("\n1. Create a List");
        printf("2. Display the List");
        printf("\n3. Add a node at the beginning");
        printf("\n4. Add a node at the end");
        printf("\n5. Add a node before a given node");
        printf("\n6. Add a node after a given node");
        printf("\n7. Delete a node from the beginning");
        printf("\n8. Delete a node from the end");
        printf("\n9. Delete a given node");
        printf("\10. Delete a node after a given node");
        printf("\n11. Delete the entire list");
        printf("\n12. Sort the list");
        printf("\n13. EXIT");
        printf("\n\n Entire your option : ");
        scanf("%d",&option);
        switch(option){
            case 1: start = create_ll(start);
                    printf("\nLinked list created");
                    break;
            case 2: start = display(start);
                    break;
            case 3: start = insert_beg(start);
                    break;
            case 4: start = insert_end(start);
                    break;
            case 5: start = insert_before(start);
                    break;
            case 6: start = insert_after(start);
                    break;
            case 7: start = delete_beg(start);
                    break;
            case 8: start = delete_end(start);
                    break;
            case 9: start = delete_node(start);
                    break;
            case 10: start = delete_after(start);
                    break;
            case 11: start = delete_list(start);
                    printf("\nLINKED LIST DELETED");
                    break;
            case 12: start = sort_list(start);
                    break;
        }

    }while(option!=13);
    return 0;

}


/*
    Creating List in next Function...

*/
struct node *create_ll(struct node *start){
    struct node *new_node,*ptr;
    int num;
    printf("\nEnter -1 to end");
    printf("\nEnter the Data : ");
    scanf("%d", &num);
    while(num!=-1){
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node -> data = num;
        if(start==NULL){
            new_node -> next = NULL;
            start = new_node;
        }
        else{
            ptr = start;
            while(ptr->next != NULL){
                ptr=ptr->next;
            }
            ptr->next = new_node;
            new_node->next=NULL;
        }
        printf("\nEnter the data : ");
        scanf("%d", &num);
    }
    return start;
}


/*

    DISPLAYING LIST IN NEXT FUNCTION

*/

struct node *display(struct node *start){
    struct node *ptr;
    ptr = start;
    while(ptr!=NULL){
        printf("\t %d", ptr->data);
        ptr = ptr->next;
    }
    return start;
}


/*

    INSERT A NODE AT THE BEGINNING OF THE LIST

*/


struct node *insert_beg(struct node *start){
    struct node *new_node;
    int num;
    printf("\nEnter the data : ");
    scanf("%d",&num);
    new_node= (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    new_node->next=start;
    start = new_node;
    return start;
}

/*

    INSERTING A NODE AT THE END OF THE LIST

*/


struct node *insert_end(struct node *start){
    struct node *new_node, *ptr;

    int num;
    printf("\nEnter the data : ");
    scanf("%d",&num);
    new_node=(struct node *)malloc(sizeof(struct node));
    ptr = start;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    new_node->data = num;
    new_node ->next = NULL;
    ptr->next=new_node;
    return start;
}


/*

    INSERT A NODE BEFORE A GIVEN NODE

*/

struct node *insert_before(struct node *start){
    struct node *new_node, *ptr, *ptrbef;
    int num,befnum;
    printf("\nEnter the data : ");
    scanf("%d",&num);
    printf("\nEnter the node before which you want to insert this data : ");
    scanf("%d",&befnum);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = num;
    ptr = start;
    printf("ptr equals start");
    //ptrbef=ptr;
    while(ptr->data!=befnum){
        ptrbef=ptr;
        ptr=ptr->next;
    }
    
    
    ptrbef -> next = new_node;
    new_node -> next = ptr;
    return start;
}

/*

    INSERT A NODE AFTER A GIVEN NODE

*/

struct node *insert_after(struct node *start){
    struct node *new_node, *ptr, *ptrafter;
    int num, afternum;
    printf("\nEnter the data : ");
    scanf("%d", &num);
    printf("Enter the num after which you want to insert this node : ");
    scanf("%d", &afternum);
    ptr=start;
    ptrafter=ptr;
    while(ptrafter->data!=afternum){
        ptrafter=ptr;
        ptr=ptr->next;
    }
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    ptrafter->next=new_node;
    new_node->next=ptr;
    return start;
}


/*

    DELETE A NODE FROM THE BEGINNING OF THE LIST

*/

struct node *delete_beg(struct node *start){
    struct node *ptr;
    ptr=start;
    start = start->next;
    free(ptr);
    return start;
}

/*

    DELETE A NODE FROM THE END OF THE LIST

*/

struct node *delete_end(struct node *start){
    struct node *ptr, *preptr;
    ptr = start;
    preptr = start;
    while(ptr->next != NULL){
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next = NULL;
    free(ptr);
    return start;
}


/*

    DELETE A GIVEN NODE FROM THE LIST

*/

struct node *delete_node(struct node *start){
    struct node *ptr, *preptr;
    int num;
    printf("\nEnter the node you want to delete : ");
    scanf("%d",&num);
    ptr = start;
    while(ptr->data != num){
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    free(ptr);
    return start;
}


/*

    DELETE A NODE AFTER A GIVEN NODE

*/


struct node *delete_after(struct node *start){
    struct node *ptr, *preptr;
    int num;
    printf("\nEnter a node whose next node you want to delete : ");
    scanf("%d",&num);
    ptr = start;
    preptr = start;
    while(preptr->data !=num){
        preptr=ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    free(ptr);
    return start;
}


/*

    DELETE THE ENTIRE LIST

*/


struct node *delete_list(struct node *start){
    start = NULL;
}

/*

    SORT THE LIST

*/

struct node *sort_list(struct node *start){
    struct node *ptr1, *ptr2;
    int temp;
    ptr1 = start;
    while(ptr1->next != NULL){
        ptr2 = ptr1-> next;
        while(ptr2->next !=NULL){
            if(ptr1->data > ptr2->data){
                temp = ptr1->data;
                ptr1->data = ptr2->data;
                ptr2 -> data = temp;
            }
            ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
    return start;
}