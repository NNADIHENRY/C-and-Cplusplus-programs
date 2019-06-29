
//NNADI HENRY IFEANYI
// nnadihenry92@gmail.com

#include<stdio.h>
#include<conio.h>
//declare the array and the total number of elements
	int a[100], n;
	
	//the input function that will accept all inputs
int input(){
	//accept the total number of elements in the array
	printf("How many elements: ");
	scanf("%d", &n);
	
	//accepts all the elements of the array
	printf("Enter the elements of the array\n");
	for(int i = 0; i <= n - 1; i++)
	{
		printf("a[%d] = ", i+1);
		scanf("%d", &a[i]);
	}
	return n;
	
}
//creating the bubble function to sort the array using bubble sort
void bubbleSort(){
	int temp;
	
	for(int i = 1; i <= n - 1; i++)
	{
		for(int j = 0; j <= n - 1 - i; j++)
		{
			if(a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	
}

// creating the display function to display the sorted array
int display(){
	printf("Element of array after the sorting are:  ");
	for(int i = 0; i <= n - 1; i++)
	{
		printf("%d  ", a[i]);
	}
	
}

//the main method
main(void)
{
	
	// function calls
	input();
	bubbleSort();
	display();
	
	
	getch();
}
