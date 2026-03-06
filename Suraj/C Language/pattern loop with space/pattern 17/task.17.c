#include<stdio.h>

void main()
{
//          1
//        1 0
//      1 0 1
//    1 0 1 0
//  1 0 1 0 1
	
	int i,j,k;
	
	for(i=1; i<=5; i++) // Outer loop for number of rows
	{
		for(j=1; j<=5-i; j++) // Inner loop for printing spaces
		{
			printf("  "); // Printing two spaces for alignment
		}
		for(k=1; k<=i; k++)
		{
			if(k%2==1) // if condition for k number is odd
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n"); // new line after new row
	}
}

