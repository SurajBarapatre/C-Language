#include<stdio.h>

void main()
{
	int i,j;
	
	for(i=1; i<=5; i++) // Outer loop for each row
	{
		for(j=1; j<=i; j++) // Inner loop for printing 0 and 1
		
		if (j%2==0) // Print 0 if j is odd and 1 if j is even
		{
		printf("1 ");
		}
		else
		{
			printf("0 ");
		}
		printf("\n"); // new line after new row
	}
}




