#include<stdio.h>

void main()
{
//       A B C D E
//         B C D E
//           C D E
//             D E
//               E
	
	int i,j,k=5;
	
	for(i=0; i<=k; i++) // Outer loop for number of rows
	{
		for(j=0; j<=i; j++) // Inner loop for printing spaces
		{
			printf("  "); // Printing two spaces for alignment
		}
		for(j=i; j<k; j++) // Inner loop for printing characters from (A + i) to 'E'
		{
			printf("%c ",'A'+j); // Printing characters starting from 'A' + J
		}
		printf("\n"); // new line after new row
	}
}   




