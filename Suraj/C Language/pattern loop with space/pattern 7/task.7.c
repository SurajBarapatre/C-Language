#include<stdio.h>

void main()
{  
  //     1 2 3 4 5
  //       1 2 3 4
   //        1 2 3
   //          1 2
    //           1

	
	int i,j,k=5;
	
	for(i=1; i<=5; i++) // Outer loop for rows
	{
		for(j=1; j<=i; j++) // Inner loop for printing spaces
		{
			printf("  "); // Printing two spaces for alignment
		}
		for(j=1; j<=6-i; j++) // Inner loop for the row printing numbers
		{
			printf("%d ",j);
		}
		printf("\n"); // new line after new row
	}
}





