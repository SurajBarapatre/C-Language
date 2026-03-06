#include<stdio.h>

void main()
{
  //         5
//         5 4
//       5 4 3
//     5 4 3 2
//   5 4 3 2 1


	int i,j,k=5;
	
	for(i=1; i<=k; i++) // Outer loop for rows
	{
		for(j=1; j<=k-i; j++) // Inner loop for printing spaces
		{
			printf("  "); // Printing two spaces for alignment
		}
		for(j=k; j>=k-i+1; j--) // Inner loop for printing numbers in decending order
		{
			printf("%d ",j);
		}
		printf("\n"); // new line after new row
	}
}



