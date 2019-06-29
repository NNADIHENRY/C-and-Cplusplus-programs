//NNADI HENRY IFEANYI
//nnadihenry92@gmail.com

#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], result[10][10], r1, c1, r2, c2, i, j, k;
    
    //accepting the number of rows for the first matrix
    printf("number of rows for the first matrix:  ");
    scanf("%d", &r1);
    //accepting the number of columnss for the first matrix
    printf("number of columns for the first matrix:  ");
    scanf("%d", &c1);
    
    //accepting the number of rows for the second matrix
    printf("number of rows for the second matrix:  ");
    scanf("%d", &r2);
    //accepting the number of columnss for the second matrix
    printf("number of columns for the second matrix:  ");
    scanf("%d", &c2);

    // check if Column of first matrix equals to row of second matrix and
    while (c1 != r2)
    {
        printf("Error! column of the first matrix not equal to row of the second matrix.\n\n");
       //accepting the number of rows for the first matrix
	    printf("number of rows for the first matrix:  ");
	    scanf("%d", &r1);
	    //accepting the number of columnss for the first matrix
	    printf("number of columns for the first matrix:  ");
	    scanf("%d", &c1);
	    
	    //accepting the number of rows for the second matrix
	    printf("number of rows for the second matrix:  ");
	    scanf("%d", &r2);
	    //accepting the number of columnss for the second matrix
	    printf("number of columns for the second matrix:  ");
	    scanf("%d", &c2);
    }

    // Storing elements of first matrix.
    printf("\nEnter elements of first matrix:\n");
    for(i=0; i<r1; ++i)
        for(j=0; j<c1; ++j)
        {
            printf("Enter elements a%d%d: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }

    // Storing elements of second matrix.
    printf("\nEnter elements of second matrix:\n");
    for(i=0; i<r2; ++i)
        for(j=0; j<c2; ++j)
        {
            printf("Enter elements b%d%d: ",i+1, j+1);
            scanf("%d",&b[i][j]);
        }

    // Initializing all elements of result matrix to 0
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
        {
            result[i][j] = 0;
        }

    // Multiplying matrices a and b and
    // storing result in result matrix
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
            for(k=0; k<c1; ++k)
            {
                result[i][j]+=a[i][k]*b[k][j];
            }

    // Displaying the result
    printf("\nResultant Matrix:\n");
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
        {
            printf("%d  ", result[i][j]);
            if(j == c2-1)
                printf("\n\n");
        }
    return 0;
}
