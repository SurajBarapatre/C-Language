#include<stdio.h>

void main()
{
//     -
//     | -
 //    - | -
//     | - | -
//     - | - | -
	
	
	int i,j;
	
	for(i=1; i<=5; i++) // Outer loop for each row
	{
		for(j=1; j<=i; j++) // Inner loop for each column
		
		if ((i+j)%2==0) // Print based on the sum of row and column indices
		{	
		printf("- ");
		}
		else
		{
			printf(" |");
		}
		printf("\n"); // new line after new row
	}
}



