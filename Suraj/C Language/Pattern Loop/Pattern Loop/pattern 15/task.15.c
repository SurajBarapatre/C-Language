#include<stdio.h>

void main()
{
	int i,j;
	
	for(i=1; i<=5; i++) // Outer loop for each row
	{
		for(j=1; j<=i; j++) // Inner loop for printing 1 and 0
		
		if ((i+j)%2==0) // Print 1 if the sum of row index and column index is even, otherwise print 0
		{
		printf("1 ");
		}
		else
		{
			printf("0 ");
		}
		printf("\n");
	}
}


