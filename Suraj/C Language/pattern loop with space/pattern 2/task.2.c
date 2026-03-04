#include<stdio.h>

void main()
{
	int i,j,k=5;
	
	for(i=1; i<=k; i++) // Outer loop for number of rows
	{
		for(j=1; j<=k-i; j++) // Inner loop for printing spaces
		{
			printf("  "); // Printing two spaces for alignment
		}
		for(j=i; j>=1; j--) // Inner loop for printing numbers in descending order
		{
			printf("%d ",j);
		}
		printf("\n"); // new line after new row
	}
}   
