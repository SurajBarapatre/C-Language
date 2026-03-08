#include <stdio.h>

void main()

{
	
//	* * * * *
//         *
//       *
//     *
//   *
// * * * * *
	
	
    int i,j,k=5;

    for(i=1; i<=k+1; i++)
    {
        for(j=1; j<=5; j++) // for decresing numbers of spaces rows with each row
        {
            if(i==1 || i==k+1 || j==k-i+2) // for print top row and bottom row with diagonal stars
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

}
