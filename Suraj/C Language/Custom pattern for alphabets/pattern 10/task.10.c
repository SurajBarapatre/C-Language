#include <stdio.h>

void main()

{
    
//  * * * * *
//      *
//      *
//      *
//      *
//   *  *
//   * *	
	
	int i,j;

    for(i=1; i<=7; i++)
    {
        for(j=1; j<=6; j++)
        {
            if(i==1)                       // for irst row
                printf("* ");
                
            else if(i>= 2 && i<=5 && j==6)  // for right vertical line
                printf("* ");
                
            else if(i==6 && (j==2 || j==6)) //  for row 6
                printf("*");
                
            else if(i==7 && (j==2 || j==3)) // for row 7
                printf(" * ");
                
            else
                printf(" ");
        }
        printf("\n");
    }

}

