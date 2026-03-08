
#include <stdio.h>

void main()

{
 //	  *           *
 //    *        *
 //      *    *
 //        *
 //        *
//         *
  //       *
	
	
	
	
    int i,j,k=7;

    for(i=1; i<=7; i++)  // for outer loop rows
    {
        for(j=1; j<=7; j++) // for inner loop column
        {
            if((i<= 4 && (j==i || j==k-i+1)) || (i>4 && j==4)) // for two diagnols create v shape and
                printf("* ");                                  // star in middle column (col 4) from the tail of Y                               
            else
                printf("  ");
        }
        printf("\n");
    }
}
