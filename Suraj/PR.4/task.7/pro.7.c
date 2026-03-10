#include <stdio.h>

void main()

{
	
   // devlop a program that prints the given custom alphabetic pattern using a nested for loop.	
	
	
//   * * * *
//   *      *
//   *      *
//   * * * *
//   *
//   *
//   *

int i,j;

    for(i=1; i<=7; i++)
    {
        for(j=1; j<=6; j++)
        {
            if(i==1 && j<=4)              // for top row
                printf("* ");
                
            else if(i==4 && j<=4)         // for middle row
                printf("* ");
                
            else if(j==1)                   // for left vertical line
                printf("* ");
                
            else if((i==2 || i==3) && j==5) // for right side top
                printf("* ");
                
            else
                printf("  ");
        }
        printf("\n");
    }

}




