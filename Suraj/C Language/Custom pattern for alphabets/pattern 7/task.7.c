#include<stdio.h>

void main()

{

//  * * *
// *     *
// *
// * * * *
// *      *
// *     *
 //* * *
 
 int i,j;

    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(i==1 && j<=3)                 // for first row
                printf("* ");
                
            else if(i==2 && (j==1 || j==6))  // for second row
                printf(" * ");
                
            else if(i==3 && j==1)            // for third row
                printf(" * ");
                
            else if(i==4 && j<=4)            // for middle row
                printf("* ");
                
            else if(i==5 && (j==1 || j==7))  // for fifth row
                printf(" * ");
                
            else if(i==6 && (j==1 || j==6))  // for sixth row
                printf("* ");
                
            else if(i==7 && j<=3)            // for last row
                printf("*");
                
            else
                printf("  ");
        }
        printf("\n");
    }

}
 
