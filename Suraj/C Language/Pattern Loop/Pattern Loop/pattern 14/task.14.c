#include<stdio.h>

void main()
{
	int i,j;
	
	for(i=5; i>=1; i--) // Outer loop for each row
	{
		for(j=1; j<=i; j++) // Inner loop for printing '*' 
		{
			printf(" * ");
		}
		printf("\n"); // new line after new row
	}
}


