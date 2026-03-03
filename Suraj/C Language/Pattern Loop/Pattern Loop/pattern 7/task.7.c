#include<stdio.h>

void main()
{
	int i,j;
	
	for(i=5; i>=1; i--) // outer loop for each row
	{
		for(j=1; j<=i; j++) // inner loop for printing numbers
		{
			printf("%d ",j);
		}
		printf("\n"); // new line after new row
	}
}


