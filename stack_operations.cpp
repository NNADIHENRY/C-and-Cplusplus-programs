/*
 * NNADI HENRY IFEANYI
 * nnadihenry92@gmail.com
 */
 
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};
 
/*
    init the stack
*/
void init(struct node* head)
{
    head = NULL;
}
 
/*
    push an element into stack
*/
struct node* push(struct node* head,int data)
{
    struct node* tmp = (struct node*)malloc(sizeof(struct node));
    if(tmp == NULL)
    {
        exit(0);
    }
    tmp->data = data;
    tmp->next = head;
    head = tmp;
    return head;
}
/*
    pop an element from the stack
*/
struct node* pop(struct node *head,int *element)
{
    struct node* tmp = head;
    *element = head->data;
    head = head->next;
    free(tmp);
    return head;
}
/*
    returns 1 if the stack is empty, otherwise returns 0
*/
int empty(struct node* head)
{
    return head == NULL ? 1 : 0;
}
 
/*
    display the stack content
*/
void display(struct node* head)
{
    struct node *current;
    current = head;
    if(current!= NULL)
    {
        printf("Stack: ");
        do
        {
            printf("%d ",current->data);
            current = current->next;
        }
        while (current!= NULL);
        printf("\n");
    }
    else
    {
        printf("The Stack is empty\n");
    }
 
}
/*
    display the menu
*/
void menu()
{
    printf("--- Stack Operations --- \n\n");
    printf("1.  push\n");
    printf("2.  pop\n");
    printf("3.  peek\n");
    printf("4.  Display stack elements\n");
    printf("-1. Quit\n");
}

#include <stdio.h>
 
//#include "stack.h"
 
int main()
{
	
	struct node* head = NULL;
    int size, element;
    int counter = 0;
    int command = 0;
    //accepts the total size of the stack to be created
    printf("Enter the size of the stack:");
    scanf("%d",&size);
    // display menu by calling the menu function
    menu();
    
    //run an infinite loop till the user press -1
    while(1){
	printf("\n\nEnter a command (1-4, -1 to quit): ");
        scanf("%d", &command);
        if(command == -1){
        	break;
        }
        //runs the command based on the user input
        switch(command)
        {
        case 0:
            menu();
            break;
        // for push command
        case 1:
        	  printf("--- enter the element to be pushed into the stack ---\n");
 
   			 init(head);
 
			if (counter >= size){
				printf("Stack is full therefore push is not possible:");	
			}else{
			
 
		        printf("Enter a number to push into the stack:");
		        scanf("%d",&element);
		        head = push(head,element);
		        display(head);
		        counter++;
    
      		 }
      		 break;
      	// for pop command
        case 2:
        	printf("--- Pop element from the stack is --- \n");
		    if(empty(head) != 0){
		    	printf("stack is empty");
		    }else
		    {
		        head = pop(head,&element);
		        printf("Pop %d from stack\n",element);
		        display(head);
		        counter--;
		    }

        	break;
        //return the peek element
        case 3:
        	if(empty(head) != 0){
		    	printf("stack is empty");
		    }else
		    {
		        printf("The element at the peek of the stack is %d\n", element);
		    }
        	break;
        	
        //display the elements of the stack
        case 4:
        	printf("Stack elements are:");
        	display(head);
        	break;
}
}
            
    
 
     
     
    return 0;
}
