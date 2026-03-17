#include<stdio.h>

void main()

{
	// develop a program that finds all the transpose matrix in 2D array
	
                                                 // for store the original matrix (array) and transpose matrix (array)
    int i,j,rows,cols;

    printf("Enter number of rows: ");       // for input rows and columns
    scanf("%d",&rows);

    printf("Enter number of columns: ");
    scanf("%d",&cols);

	int a[i][j],t[i][j];
    
    printf("\n");
 
    
    for(i=0; i<rows; i++)                    // for input matrix (array) elements
	{
        for(j=0; j<cols; j++) 
		{
			printf("Enter the elements of the matrix 2D array :");
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<rows; i++)                       // for finding transpose of matrix (array)
	{
        for(j=0; j<cols; j++) 
		{
            t[j][i] = a[i][j];                  // for conditon of transpose matrix (array)
        }
        printf("\n");
    }

    printf("Transpose Matrix (array)is:\n");     // for display transpose matrix (array)
    
	for(i=0; i<cols; i++) 
	{
        for(j=0; j<rows; j++) 
		{
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }


}

