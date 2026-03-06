#include<stdio.h>

void main()
{
//	  1 0 1 0 1
//      0 1 0 1
//        1 0 1
//          0 1
//            1
	
	int i,j,k,n=5;
	
	for(i=1; i<=n; i++) // Outer loop for number of rows
	{
		for(j=1; j<=i; j++) // Inner loop for printing spaces
		{
			printf("  "); // Printing two spaces for alignment
		}
		for(k=i; k<=n; k++)
		{
			if((i+k)%2==0) // if condition for i add k number is even
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

