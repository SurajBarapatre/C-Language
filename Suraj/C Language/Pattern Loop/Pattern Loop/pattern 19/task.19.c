#include<stdio.h>

void main()
{
	int i,j,k=1; // integer 'k' starts at 1 to print numbers sequentially.
	
	for(i=1; i<=5; i++) // Outer loop for each row
	{
		for(j=1; j<=i; j++) // Inner loop for printing numbers
		{
			printf("%d ",k); 
			
			k++; // Increment 'k' to print the next number
		}
		printf("\n"); // new line after new row
	}
}




