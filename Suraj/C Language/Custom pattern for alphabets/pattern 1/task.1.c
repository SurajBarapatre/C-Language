#include<stdio.h>

void main()

{
//	* * * * *
//  *       *
//  * * * * *
//  *       *
//  *       *
//  *       *

int i,j;

for(i=1; i<=7; i++)
{
	for(j=1; j<=5; j++)
	{
		if(i==1 || i==4) // for top and middle rows
		printf("* ");
		
		else if (j==1 || j==5) // for left and right borders
		printf("* ");
		
		else
		printf("  ");  // space inside
	}
	printf("\n");
}




}
