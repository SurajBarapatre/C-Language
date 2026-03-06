#include<stdio.h>

void main()
{
//   1 1 1 1 1
//   2 2 2 2
//   3 3 3
//   4 4
//   5
	
	
	int a,b;
	
	for(a=1; a<=5; a++) // Outer loop for each row
	{
		for(b=1; b<=5-a+1; b++) // Inner loop for printing the number 'i'
		{
			printf("%d ",a);
		}
		printf("\n"); // new line after new row
	}
}



