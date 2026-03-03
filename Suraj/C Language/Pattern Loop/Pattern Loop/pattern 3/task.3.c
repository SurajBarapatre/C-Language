
#include<stdio.h>

void main()
{
	int i,j; // number of lines for the pattern
	
	for(i=1; i<=5; i++) // outer loop for number of rows
	{
		for(j=1; j<=i; j++) // inner loop for printing numbers
		{	
			printf("%d ",i); // print numbers current row number i
		}
		printf("\n"); // new line after new row
	}
}

