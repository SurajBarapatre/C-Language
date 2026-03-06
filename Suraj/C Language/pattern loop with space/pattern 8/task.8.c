#include<stdio.h>

void main()
{
//	    1 2 3 4 5
//        2 3 4 5
//          3 4 5
 //           4 5
 //             5
	
	int i,j,k=5;
	
	for(i=1; i<=5; i++) // Outer loop for rows
	{
		for(j=1; j<=i; j++) // Inner loop for printing spaces
		{
			printf("  "); // Printing one spaces for alignment
		}
		for(j=i; j<=5; j++) // Inner loop for printing numbers starting from i
		{
			printf("%d ",j);
		}
		printf("\n"); // new line after new row
	}
}






