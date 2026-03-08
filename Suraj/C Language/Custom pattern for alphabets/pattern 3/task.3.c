
#include<stdio.h>

void main()

{
//	* * * *
// *
// *
// *
// *
// *
//  * * * *

int i,j;

for(i=1; i<=7; i++)
{
	for(j=1; j<=5; j++)
	{
		if(i==1 || i==7) // for top and bottom row
		printf("* ");
		
		else if (j==1) // for left side line
		printf("* ");
		
		else
		printf("  ");  // space inside
	}
	printf("\n");
}




}
