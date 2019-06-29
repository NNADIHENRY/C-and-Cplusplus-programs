//NNADI HENRY IFEANYI
//nnadihenry92@gmail.com

#include<stdio.h>
#include<conio.h> 

long number(int);
 
int main()
{
  int n;
  long f;
 //Accepting the number to multiply till 1
  printf("Enter an integer number: ");
  scanf("%d", &n); 
 //checking if the number is a negative number
  if (n < 0)
    printf("can't multiply negative values'.\n");
    
    // doing the multiplication
  else
  {
    f = number(n);
    printf("%d ", n);
    for(int i = n-1; i>0; i--)
    	printf(" * %d ", i);
    
  }
  printf(" = %d ", f);
  
  getch();
  return 0;
}
 
long number(int n)
{
  if(n == 0)
    return 1;
  else
    return(n * number(n-1));
}
