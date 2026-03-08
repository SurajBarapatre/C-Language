#include <stdio.h>

void main()

{	
	
//	*       *
//  *       *
//  *       *
//  *       *
//  *       *
//  * * * * *

    int i,j;

    for(i=1; i<=6; i++)
    {
        for(j=1; j<=5; j++)
        {
            if((j==1 || j==5) && i<=6)   // for left and right sides line
                printf("* ");
                
            else if(i==6)                   // for bottom row
                printf("* ");
                
            else
                printf("  ");
        }
        printf("\n");
    }

}
