#include<stdio.h>

void main()

{
	
//   * * * * *
//       *
//       *
//       *
//       *
//       *	
		
	int i,j;

    for(i=1; i<=6; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(i==1)      // for top rows
                printf("* ");
                
            else if(j==3)           // for middle vertical line
                printf("* ");
                
            else
                printf("  ");         // for spaces
        }
        printf("\n");
    }

}

