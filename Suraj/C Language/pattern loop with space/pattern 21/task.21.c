#include<stdio.h>

void main()
{
//	   1 1 1 1 1
//       0 0 0 0
//         1 1 1
//           0 0
//             1
		
	int i,j,k,n=5;
	
	for(i=1; i<=n; i++) // Outer loop for number of rows
	{
		for(j=1; j<=i; j++) // Inner loop for printing spaces
		{
			printf("  "); // Printing two spaces for alignment
		}
		for(k=1; k<=n-i+1; k++)
		{
			if(i%2==1) // if condition for i number is odd
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



