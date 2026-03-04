#include<stdio.h>

void main()
{
	int i,j,k=5;
	
	for(i=k; i>=5; i--) // Outer loop for rows
	{
		for(j=1; j<=5-i; j++) // Inner loop for printing spaces
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


