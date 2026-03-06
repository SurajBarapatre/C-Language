#include<stdio.h>

void main()
{
	     5 4 3 2 1
           4 3 2 1
             3 2 1
               2 1
                 1
	
	int i,j,k=6;
	
	for(i=1; i<=5; i++) // Outer loop for rows
	{
		for(j=1; j<=i; j++) // Inner loop for printing spaces
		{
			printf("  "); // Printing two spaces for alignment
		}
		for(j=k-i; j>=1; j--) // Inner loop for printing numbers from (5-i) down to 1
		{
			printf("%d ",j);
		}
		printf("\n"); // new line after new row
	}
}





