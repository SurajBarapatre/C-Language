#include <stdio.h>

void main()

{
    
// *       *
// *     *
// *   *
// * *
// *   *
// *      *
// *        *	
	
		
	int i,j;

    for(i=1; i<=7; i++)
    {
        printf("* ");  // for first star

        if(i<=4)
        {
            for(j=1; j<=(10-3*i); j++) // for space decrece until row 4
                printf(" ");
        }
        else
        {
            for(j=1; j<=(2*i-8); j++) // for after space increse from row 4
                printf(" ");
        }

        printf("*\n"); // for second star
    }

}
