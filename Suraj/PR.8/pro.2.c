#include<stdio.h>

// Develop program to find cubes of all elements from given 2D array using pointer with UDF

void cubes(int *ptr, int rows, int cols)
{
 int i,j,n;
 
 for(i=0; i<rows; i++)
 {
 	for(j=0; j<cols; j++)
 	{
 	   n = *ptr;
 	   
 	   printf("\nCube of array [%d][%d]=[%d]\n",i,j,n*n*n);
 	   
 	   ptr++;
	}
	printf("\n");
 }

}
void main()
{
	int rows,cols,i,j;
	
	printf("Enter Number of rows: ");
	scanf("%d",&rows);
	
	printf("Enter Number of cols: ");
	scanf("%d",&cols);
	
	int a[rows][cols];
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("\nCubes of All Elements -");
	cubes(&a,rows,cols);
}

