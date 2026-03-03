#include<stdio.h>

void main()
{
	int i,j;
	
	for(i=1; i<=5; i++) // Outer loop for each row
	{
		for(j=5; j>=i; j--) // Inner loop for printing numbers from 5 down to (5 - i)
		{
			printf("%d ",j);
		}
		printf("\n"); // new line after new row
	}
}


