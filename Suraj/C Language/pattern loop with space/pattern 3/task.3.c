#include<stdio.h>

void main()
{
// 	         5
//         4 5
//       3 4 5
//     2 3 4 5
//   1 2 3 4 5
	
	
	int i,j,k;
	
	for(i=5; i>=1; i--) // Outer loop for rows
	{
		for(j=1; j<i; j++) // Inner loop for printing spaces
		{
			printf("  "); // Printing two spaces for alignment
		}
		for(k=i; k<=5; k++) // Inner loop for printing numbers in ascending order
		{
			printf("%d ",k);
		}
		printf("\n"); // new line after new row
	}
}


