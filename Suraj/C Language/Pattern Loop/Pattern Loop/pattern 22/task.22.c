
#include<stdio.h>

void main()
{
//     A
//     B C
//     D E F
//     G H I J
//     K L M N O
	
	
	char i,j,k;
	
	k='A';
	
	for(i='A'; i<='E'; i++) // Outer loop for each row
	{
		for(j='A'; j<=i; j++) // Inner loop for printing letters
		{
			printf("%c ",k); // Print the current character followed by a space
			
			k++; // increment to next character
		}
		printf("\n"); // new line after new row
	}
}





