#include<stdio.h>

void main()
{
//   5 4 3 2 1
//   4 3 2 1
//   3 2 1
//   2 1
//   1


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




