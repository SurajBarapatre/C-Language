#include <stdio.h>

void main()

{
//      *       *
//      * *   * *
//      *   *   *
//      *       *
//      *       *
//      *       *
//      *       *

	int i,j;

    for(i=1; i<=7; i++)
    {
        for(j=1; j<=7; j++)
        {
            if((i==1 && (j==1 || j==7)) ||      //  for first row
               (i==2 && (j==1 || j==3 || j==5|| j==7)) ||
               (i==3 && (j==1 || j==4 || j==7)) ||
               (i>=4 && (j==1 || j==7)))        // for vertical sides
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

