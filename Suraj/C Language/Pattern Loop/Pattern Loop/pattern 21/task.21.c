
#include<stdio.h>

void main()
{
	char i,j;
	
	for(i='A'; i<='E'; i++) // Outer loop for each row
	{
		for(j='A'; j<=i; j++) // Inner loop for printing letters from A to the i-th letter
		{
			printf("%c ",j); // Print the current character followed by a space	
		}
		printf("\n"); // new line after new row
	}
}





