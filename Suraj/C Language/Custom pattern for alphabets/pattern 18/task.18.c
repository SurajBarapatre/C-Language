#include <stdio.h>

void main()

{
    
//	 * * * * *
//   *       *
//   *       *
//   * * * * *
//   *   *
//   *     *
//   *       *
	
	
	int i,j;

    for(i=1; i<=7; i++)
    {
        for(j=1; j<=6; j++)
        {
            if((i==1 && j <=5)||                   // for top row
               (i==4 && j <=5)||                   // for middle row
               (j==1)||((i==2 || i==3) && j==6)||  // for left vertical line
               (i==5 && j==3) ||                   // for right side     
               (i==6 && j==4) ||                    // diagonal side
               (i==7 && j==5))
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

