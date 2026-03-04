#include<stdio.h>

void main()
{
	int i,j,k=6;
	
	for(i=1; i<=5; i++) // Outer loop for rows
	{
		for(j=i; j<=5; j++) // Inner loop for printing spaces
		{
			printf("  "); // Printing two spaces for alignment
		}
		for(j=1; j<=i; j++) // Inner loop for printing asterisks
		{
			printf("* "); // Printing asterisks
		}
		printf("\n"); // new line after new row
	}
}






