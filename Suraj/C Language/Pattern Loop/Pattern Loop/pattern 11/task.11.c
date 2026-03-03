#include<stdio.h>

void main()
{
	int i,j;
	
	for(i=5; i>=1; i--) // Outer loop for each row
	{
		for(j=i; j>=1; j--) // Inner loop for printing numbers from (5-i) down to 1
		{
			printf("%d ",j);
		}
		printf("\n"); // new line after new row
	}
}



