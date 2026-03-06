#include<stdio.h>

void main()
{
	     1
       2 2
     3 3 3
   4 4 4 4
 5 5 5 5 5
	
	int i,j,k=5;
	
	for(i=1; i<=k; i++) // Outer loop for rows
	{
		for(j=1; j<=k-i; j++) // Inner loop for printing spaces
		{
			printf("  "); // Printing two spaces for alignment
		}
		for(j=1; j<=i; j++) // Inner loop for the row printing numbers repeated
		{
			printf("%d ",i);
		}
		printf("\n"); // new line after new row
	}
}


