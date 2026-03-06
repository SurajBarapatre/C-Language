
#include<stdio.h>

void main()
{
      //1. 1
        // 1 2
       //  1 2 3
       //  1 2 3 4
       //  1 2 3 4 5
	
	
	int i,j;
	
	for(i=1; i<=5; i++) // outer loop for each line
	{	
		for(j=1; j<=i; j++) // inner loop for printing numbers 
		{
			printf("%d ",j); // print numbers from 1 to i
		}
		printf("\n"); // new line after new row
	} 
}


