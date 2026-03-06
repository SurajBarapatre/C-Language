#include<stdio.h>

void main()
{
   //  5 5 5 5 5
//     4 4 4 4
//     3 3 3
//     2 2
//     1


	int i,j;
	
	for(i=5; i>=1; i--) // Outer loop for each row
	{
		for(j=1; j<=i; j++) // Inner loop for printing the number 'i'
		{
			printf("%d ",i);
		}
		printf("\n"); // new line after new row
	}
}




