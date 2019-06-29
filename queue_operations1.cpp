//NNADI HENRY IFEANYI
//nnadihenry92@gmail.com

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


int sizes;

int intArray[10];
int front = 0;
int rear = -1;
int itemCount = 0;

int peek() {
   return intArray[front];
}

bool isEmpty() {
   return itemCount == 0;
}

bool isFull() {
   return itemCount == sizes;
}

int size() {
   return itemCount;
}  

void insert(int data) {

   if(!isFull()) {
	
      if(rear == sizes-1) {
         rear = -1;            
      }       

      intArray[++rear] = data;
      itemCount++;
   }
}

int removeData() {
   int data = intArray[front++];
	
   if(front == sizes) {
      front = 0;
   }
	
   itemCount--;
   return data;  
}
/*
    display the menu
*/
void menu()
{
    printf("--- QUEUE Operations --- \n\n");
    printf("1.  Enqueue\n");
    printf("2.  Dequeue\n");
    printf("3.  front\n");
    printf("4.  Display queue elements\n");
    printf("-1. Quit\n");
}

int main() {
	int element;
	int command;
	
	//accepts the total size of the queue to be created
    printf("Enter the size of the QUEUE:");
    scanf("%d",&sizes);
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
        // for enqueue command
        case 1:
        	
        	 if(isFull()) {
     			 printf("Queue is full!\n");   
   			}else{
   			        	  
		        printf("Enter a number to enqueued into the queue:");
		        scanf("%d",&element);
		        insert(element);
			}
      		 
      		 break;
      	// for dequeue command
        case 2:
        	if(isEmpty()) {
     			 printf("Queue is Empty!\n");   
   			}else{
   			

					   // remove one item 
					   int num = removeData();
						
					   printf("Element removed: %d\n",num);
				}
        

        	break;
        //return the peek element
        case 3:
        	
        		if(isEmpty()) {
     			 printf("Queue is Empty!\n");   
   			}else{
        	
        	 printf("Element at front: %d\n",peek());
        }
        	break;
        	
        //display the elements of the stack
        case 4:
        		if(isEmpty()) {
     			 printf("Queue is Empty!\n");   
   			}else{
        	 printf("Index:  ");
	
		  for(int i = 0; i<sizes; i++) {         
		      printf("%d ",i);
		   }   
        	 printf("\nQueue:  ");
	
		   while(!isEmpty()) {
		      int n = removeData();           
		      printf("%d ",n);
		   }   
	}
        
        	break;
}
}
}
