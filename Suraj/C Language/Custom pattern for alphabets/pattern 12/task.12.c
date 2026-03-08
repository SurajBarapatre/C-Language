#include<stdio.h>

void main()

{
	
//	  *
 //   *
//    *
//    *
//    *
//    *
//    * * * *

int i,j;

for(i=1; i<=7; i++)
{
	if(i<7)
	{
		printf("*\n");
	}
	else
	{
		for(j=1; j<=4; j++)
		
			printf("* ");
		
	}
  }
}

