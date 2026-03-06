#include<stdio.h>

void main()
{
//	    A B C D E
//        A B C D
//          A B C
 //           A B
 //             A
		
	int i,j,k=5;
	
	for(i=1; i<=k; i++) // Outer loop for number of rows
	{
		for(j=0; j<=i; j++) // Inner loop for printing spaces
		{
			printf("  "); // Printing two spaces for alignment
		}
		for(j=0; j<=k-i; j++) // Inner loop for printing characters from 'A' to (k-i)
		{
			printf("%c ",'A'+j); // Printing characters starting from 'A' + J
		}
		printf("\n"); // new line after new row
	}
}   



