#include <stdio.h>

void main()

{
 //  * * *
//  *      *
//  *      *
//  *      *
//  * *   *
//   *  *
//         * 	
	
int i,j;  
    
    for(i=1; i<=8; i++)		
    {
    	for(j=1; j<=6; j++)		
    	{
    		if((i==1 || i==7) && (j>=1 && j<=5))	// for top row
    		{
    			printf("* ");
			}
			else if(j==1 && (i>=1 && i<=7)) // for bottom row
			{
				printf("* ");
			}
			else if(j==5 && (i>=1 && i<=6)) // for left side
			{
				printf("* ");
			}
			else if(i==6 && j==5 ) // for right side
			{
				printf("* ");
			}
			else if(i==5 && j==4 )  // for inner star
			{
				printf("* ");
			}
			else if(i==7 && j==6)  // for tail of Q
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
