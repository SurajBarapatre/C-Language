#include<stdio.h>

void main()

{
	
//   * * * * *
//       *
//       *
//       *
//       *
//       *
//   * * * * *	
		
	int i,j;

    for(i=1; i<=7; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(i==1 || i==7)      // for top and bottom rows
                printf("* ");
                
            else if(j==3)           // for right side vertical line
                printf("* ");
                
            else
                printf("  ");         // for spaces
        }
        printf("\n");
    }

}
