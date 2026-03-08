#include<stdio.h>

void main()

{
//      * * *
 //     *    *
//      *    *
 //     * * *
 //     *    *
 //     *    *
  //    * * *

int i,j;

for(i=1; i<=7; i++)
{
	for(j=1; j<=5; j++)
	{
		if(i==1 || i==4 || i==7) // for full rows
		printf("* ");
		
		else if ((i==2 || i==6) && (j==1 || j==5)) 
		printf("* ");
		
		else if((i==3 || i==5) && (j==1 || j==4))
		printf("* ");
		
		else
		printf("  "); // space inside
	}
	printf("\n");
}




}

