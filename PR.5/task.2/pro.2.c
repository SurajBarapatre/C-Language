#include<stdio.h>

void main()

{
	//develop a program that finds all the largest elements from 2D array
	
	int rows,cols,i,j;
	int largest;

    printf("Enter Number of rows: ");         // for input rows and columns
    scanf("%d",&rows);

    printf("Enter Number of columns: ");
    scanf("%d",&cols);

    int a[rows][cols];

    printf("Enter elements of the 2D array:\n");   // for input elements of array
    
	for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    
    for(i=0; i<rows; i++)                  // for input to find laregst element of array
	{
		for(j=0; j<cols; j++)
		
		if(a[i][j]>largest)               // for condition to finding largest element of aaray
    {
    	largest = a[i][j];
	}
	
	}
	    
    printf("largest in the elements of 2D array = %d",largest); // for display largest element in array
}
