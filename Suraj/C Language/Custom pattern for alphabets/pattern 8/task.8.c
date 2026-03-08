#include<stdio.h>

void main()

{
	
//  *         *
//  *         *
//  *         *
//  * * * * * * 
//  *         *
//  *         *
//  *         *

int i,j;

for(i=1; i<=7; i++)
{
	for(j=1; j<=7; j++)
	{
		if(i==4) // for middle rows
		printf("* ");
		
		else if (j==1 || j==7) // for left and right side columns
		printf("* ");
		
		else
		printf("  ");  // space inside
	}
	printf("\n");
}

}

