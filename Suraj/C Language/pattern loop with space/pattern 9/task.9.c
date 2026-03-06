#include<stdio.h>

void main()
{   
	    5 4 3 2 1
          5 4 3 2
            5 4 3
              5 4
                5
	
	int i,j,k=5;
	
	for(i=1; i<=5; i++) // Outer loop for rows
	{
		for(j=1; j<=i; j++) // Inner loop for printing spaces
		{
			printf("  "); // Printing one spaces for alignment
		}
		for(j=5; j>=i; j--) // Inner loop for printing numbers
		{
			printf("%d ",j);
		}
		printf("\n"); // new line after new row
	}
}



