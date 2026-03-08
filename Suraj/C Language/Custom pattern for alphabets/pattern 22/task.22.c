#include <stdio.h>

void main()

{
	
 //  *            *
 //   *          *
 //    *        *
 //     *      *
  //     *    *
 //       *  *
  //       *
   
    int i,j,k= 7;

    for(i=1; i<=7; i++)
    {
        for(j=1; j<=k*2; j++)
        {
            if(j==i || j==(k*2 - i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

