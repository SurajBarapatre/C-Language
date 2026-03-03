
#include<stdio.h>

void main()
{
	int i,j; // number of lines
	
	for(i=1; i<=5; i++) // outer loop for each line
	{
		for(j=i; j>=1; j--) // inner loop for printing numbers in reverse order
		{
			printf("%d ",j); // print numbers from i down to 1
		}
		printf("\n"); // new line after each row
	}
}

