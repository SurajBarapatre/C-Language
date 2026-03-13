#include <stdio.h>

void main()

{
	// WAP to find average of 2D array.
	
	int rows,cols,i,j,sum=0;
	float average;

    printf("Enter Number of rows: "); // for input rows and columns
    scanf("%d",&rows);

    printf("Enter Number of columns: ");
    scanf("%d",&cols);

    int a[rows][cols];

    printf("Enter elements of the 2D array:\n"); // for input elements
    
	for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
        printf("\n");
    }
    
    average = sum / (rows * cols);  // for input of calculate average of elements

    printf("Average of all elements of 2D array = %.2f",average); // for display average elements
    
    }


