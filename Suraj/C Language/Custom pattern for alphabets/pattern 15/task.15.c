#include<stdio.h>

void main()	

{

// * * * * *
// *       *
// *       *
// *       *
// *       *
// * * * * *

int i,j;

for(i=1; i<=7; i++) // for rows
{
	for(j=1; j<=5; j++) //for columns
	{
		if(i==1 || i==7 || j==1 || j==5) // for vertical line
		printf("* ");
		
		else
		printf("  "); // for other spaces
	}
	printf("\n");
}	
	
}


