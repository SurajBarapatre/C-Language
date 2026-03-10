
#include<stdio.h>

void main()
{
    
	// devlop a program that prints the given right half triangle pattern using a nested for loop.
	
	
	  //   41
      //   41 42
       //  41 42 43
       //  41 22 43 44
       //  41 42 43 44 45
	
	
	int i,j;
	
	for(i=41; i<=45; i++) // outer loop for each line
	{	
		for(j=41; j<=i; j++) // inner loop for printing numbers 
		{
			printf("%d ",j); // print numbers from 41 to i
		}
		printf("\n"); // new line after new row
	} 
}





