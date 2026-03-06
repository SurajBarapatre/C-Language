#include<stdio.h>

void main()
{
	    5
      4 4
    3 3 3
  2 2 2 2
1 1 1 1 1
	
	int i,j,k;
	
	for(i=5; i>=1; i--) // Outer loop for rows
	{
		for(j=1; j<=i-1; j++) // Inner loop for printing spaces
		{
			printf("  "); // Printing two spaces for alignment
		}
		for(k=5; k>=i; k--) // Inner loop for the row printing numbers repeated
		{
			printf("%d ",i);
		}
		printf("\n"); // new line after new row
	}
}


