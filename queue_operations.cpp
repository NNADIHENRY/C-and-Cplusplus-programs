//NNADI HENRY IFEANYI
// nnadihenry92@gmail.com

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 6
int sizes;

int intArray[MAX];
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
	
      if(rear == MAX-1) {
         rear = -1;            
      }       

      intArray[++rear] = data;
      itemCount++;
   }
}

int removeData() {
   int data = intArray[front++];
	
   if(front == MAX) {
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
    printf("--- Stack Operations --- \n\n");
    printf("1.  Enqueue\n");
    printf("2.  Dequeue\n");
    printf("3.  front\n");
    printf("4.  Display queue elements elements\n");
    printf("-1. Quit\n");
}

int main() {
	int element;
	int command;
	
	//accepts the total size of the stack to be created
    printf("Enter the size of the QUEUE:");
    scanf("%d",&size);
    menu();
    
   /* insert 5 items */
   insert(3);
   insert(5);
   insert(9);
   insert(1);
   insert(12);

   // front : 0
   // rear  : 4
   // ------------------
   // index : 0 1 2 3 4 
   // ------------------
   // queue : 3 5 9 1 12
   insert(15);

   // front : 0
   // rear  : 5
   // ---------------------
   // index : 0 1 2 3 4  5 
   // ---------------------
   // queue : 3 5 9 1 12 15
	
   if(isFull()) {
      printf("Queue is full!\n");   
   }

   // remove one item 
   int num = removeData();
	
   printf("Element removed: %d\n",num);
   // front : 1
   // rear  : 5
   // -------------------
   // index : 1 2 3 4  5
   // -------------------
   // queue : 5 9 1 12 15

   // insert more items
   insert(16);

   // front : 1
   // rear  : -1
   // ----------------------
   // index : 0  1 2 3 4  5
   // ----------------------
   // queue : 16 5 9 1 12 15

   // As queue is full, elements will not be inserted. 
   insert(17);
   insert(18);

   // ----------------------
   // index : 0  1 2 3 4  5
   // ----------------------
   // queue : 16 5 9 1 12 15
   printf("Element at front: %d\n",peek());

   printf("----------------------\n");
   printf("index : 5 4 3 2  1  0\n");
   printf("----------------------\n");
   printf("Queue:  ");
	
   while(!isEmpty()) {
      int n = removeData();           
      printf("%d ",n);
   }   
   
   
   
   
   
   
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
        	
        	 if(isFull()) {
     			 printf("Queue is full!\n");   
   			}else{
   			        	  
		        printf("Enter a number to enqueued into the queue:");
		        scanf("%d",&element);
		        insert(element);
			}
      		 
      		 break;
      	// for pop command
        case 2:
        

        	break;
        //return the peek element
        case 3:
        	
        	break;
        	
        //display the elements of the stack
        case 4:
        
        	break;
}
}
}
