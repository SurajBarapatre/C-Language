#include<stdio.h>

void main()
{
	int i,j,k=5;
	
	for(i=0; i<5; i++) // Outer loop for number of rows
	{
		for(j=1; j<k-1; j++) // Inner loop for printing spaces
		{
			printf(" "); // Printing two spaces for alignment
		}
		for(j=i; j>=0; j--) // Inner loop for printing characters from A to the current letter
		{
			printf("%c ",'A'+j); // Printing characters starting from 'A' + J
		}
		printf("\n"); // new line after new row
	}
}   

