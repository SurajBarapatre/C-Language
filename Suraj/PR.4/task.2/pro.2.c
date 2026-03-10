#include<stdio.h>

void main()
{
    
	// devlop a program that prints the given right floyd's triangle pattern using a nested for loop.
	
	  //   11
      //   12 13
       //  14 15 16
       //  17 18 19 20
    
	
	int i,j,k=11;
	
	for(i=1; i<=4; i++) // outer loop for rows
	{	
		for(j=1; j<=i; j++) // inner loop for columns 
		{
			printf("%d ",k);
			k++;             // print numbers from k to i
		}
		
		printf("\n"); // new line after new row
	} 
}






