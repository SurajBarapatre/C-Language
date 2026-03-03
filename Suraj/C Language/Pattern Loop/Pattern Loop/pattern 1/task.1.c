
#include<stdio.h>

void main()
{
	int i,j;
	
	for(i=1; i<=5; i++) // outer loop for each line
	{	
		for(j=1; j<=i; j++) // inner loop for printing numbers 
		{
			printf("%d ",j); // print numbers from 1 to i
		}
		printf("\n"); // new line after new row
	} 
}

