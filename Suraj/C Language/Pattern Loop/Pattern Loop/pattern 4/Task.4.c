#include<stdio.h>

void main()
{
 //      5
 //      5 4
  //     5 4 3
    //   5 4 3 2
    //   5 4 3 2 1


	int i,j;
	
	for(i=1; i<=5; i++) // outer loop for number of rows
	{
		for (j=5; j>5-i; j--) // inner loop for printing numbers descending order
		{
			printf("%d ",j); // printing numbers from 5 down to (5-i)
		}
		printf("\n"); //  new line after new row
		
	}
	
		
		
}

