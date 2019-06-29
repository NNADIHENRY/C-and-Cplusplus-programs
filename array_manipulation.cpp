// NNADI HENRY IFEANYI
// nnadihenry92@gmail.com


#include <stdio.h>
#include<conio.h> 

main(void)
{
	int position, i, n, j;
 
   	printf("Enter number of elements in array: ");
   	scanf("%d", &n);
   	int array[n];
 
   	printf("Enter %d elements\n", n);
   	printf("Note that duplicated elements will be deleted\n");
 
   	for (i = 0; i < n; i++)
   	
      	scanf("%d", &array[i]);

    for (i = 0; i < (n-1); i++)
    	for (j = 0; j < (n-1); j++){
    	
      	
	      	if (array[i] == array[j+1])
	      	{
	      			for (i = i; i < n - 1; i++)
	         		array[i] = array[i + 1];
	      		
	      		
	      	}
	      	
	  }
	      	
	      	
 
    printf("Resultant array: ");
 
    for (i = 0; i < n - 1; i++)
         	printf("%d   ", array[i]);
   
   	getch();
}
