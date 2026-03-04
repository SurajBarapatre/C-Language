#include<stdio.h>

void main()
{
	int i,j,k=5;
	
	for(i=k; i>=1; i--) // Outer loop for rows
	{
		for(j=1; j<=k-i; j++) // Inner loop for printing spaces
		{
			printf("  "); // Printing two spaces for alignment
		}
		for(j=i; j<=5; j++) // Inner loop for printing numbers in ascending order
		{
			printf("%d ",j);
		}
		printf("\n"); // new line after new row
	}
}

