#include<stdio.h>

void main()
{
//      1 
//      2 3
//      4 5 6
//      7 8 9 10
//     11 12 13 14 15
	
	
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





