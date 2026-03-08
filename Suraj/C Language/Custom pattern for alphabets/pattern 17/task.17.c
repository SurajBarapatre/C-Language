#include <stdio.h>

void main()

{
 //  * * *
//  *      *
//  *      *
//  *      *
//  * *   *
//   *  *
//         * 	
	
	int i,j;

    for(i=1; i<=7; i++)
    {
        for(j=1; j<=6; j++)
        {
            if((i==1 && j<=5) ||           // for top row
               (i==7 && j<=5) ||           // for bottom row
               (j==1 && i>=2 && i<=6) ||   // for left side
               (j==6 && i>=2 && i<=4) ||   // for right side
               (i==4 && j==4) ||           // for inner star
               (i==6 && j==6))             // for tail of Q
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

}

