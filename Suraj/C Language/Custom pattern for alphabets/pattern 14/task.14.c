#include<stdio.h>

void main()
	
{

// *             *
// * *           *
// *   *         *
// *     *       *
// *       *     *
// *          *  *
// *             *

int i,j,k=7;

for(i=1; i<=7; i++) // for rows
{
	for(j=1; j<=7; j++) //for columns
	{
		if(j==1 || j==7 || i==j) // for left and right vertical line and diagonal line from from top left to right bottom.
		printf("* ");
		
		else
		printf("  "); // for other spaces
	}
	printf("\n");
}	
	
}

