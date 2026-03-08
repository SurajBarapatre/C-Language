#include <stdio.h>

void main()

{
   
//      * * * * *
//      *
//      * 
//      * * * * *
//              *
//              *
//      * * * * * 
	
	
	
	
	int i,j;

    for(i=1; i<=7; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(i==1 || i==4 || i==7)      // for full star line
                printf("* ");
                
            else if((i==2 || i==3) && j==1)  // for left side first column
                printf("* ");
                
            else if((i==5 || i==6) && j==5)  // for right side last column
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

}
