#include <stdio.h>

void main() 

{
    
	// develop a program to print and find the sum of all elements of row and column 2D array
	
	
	int i,j,r,c;
    int row_sum,col_sum;

    printf("Enter number of rows: ");                          // for input rows and columns
    scanf("%d",&r);

    printf("Enter number of columns: ");
    scanf("%d",&c);
    
    int a[r][c];

printf("Enter the elements of the array:\n");              // for input of elements of array

        for(i=0; i<r; i++) 
	{
        for(j=0; j<c; j++) 
		{
			printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("Row-wise Sum:\n");                 // for input of row-wise sum in elements
    for(i=0; i<r; i++) 
	{
        row_sum=0;
        
		for(j=0; j<c; j++) 
		{
            row_sum = row_sum + a[i][j];
        }
        printf("Sum of Row %d = %d\n",i,row_sum);  // for display row-wise sum in elements
    }
    printf("\n");

    printf("Column-wise Sum:\n");                // for input column-wise sum in elements
    
	for(j=0; j<c; j++) 
	{
    	
        col_sum=0;
        
        for(i=0; i<r; i++) 
		{
            col_sum = col_sum + a[i][j];
        }
        printf("Sum of Column %d = %d\n",j,col_sum);  // for display column-wise sum in elements
    }

}
