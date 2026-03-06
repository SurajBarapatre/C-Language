#include<stdio.h>

void main()
{
  //   1 2 3 4 5
 //    1 2 3 4
//     1 2 3
//     1 2
//     1

	
	int i,j;
	
	for(i=5; i>=1; i--) // outer loop for each row
	{
		for(j=1; j<=i; j++) // inner loop for printing numbers
		{
			printf("%d ",j);
		}
		printf("\n"); // new line after new row
	}
}



