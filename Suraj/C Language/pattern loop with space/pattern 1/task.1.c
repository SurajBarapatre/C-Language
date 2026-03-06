#include<stdio.h>

void main()
{
 //           1
//          1 2
//        1 2 3
//      1 2 3 4
//    1 2 3 4 5

	int i,j,k=5;
	
	for(i=0; i<=5; i++) // Outer loop for rows
	{
		for(j=0; j<=5-i; j++) // Inner loop for printing spaces
		{
			printf("  "); // Printing two spaces for alignment
		}
		for(k=1; k<=i; k++) // Inner loop for the row printing numbers repeated
		{
			printf("%d ",k);
		}
		printf("\n"); // new line after new row
	}
}


