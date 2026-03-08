#include <stdio.h>

void main()

{
//	 *           *
 //    *       *
 //      *   *
 //        *
 //      *   *
 //    *       *
//   *           *
	
    int i,j,k= 7;

    for(i=1; i<=7; i++)
    {
        for(j=1; j<=7; j++) // for left side diagonal line 
        {
            if(j==i || j==k-i+1) // for right side diagonal line
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

}

