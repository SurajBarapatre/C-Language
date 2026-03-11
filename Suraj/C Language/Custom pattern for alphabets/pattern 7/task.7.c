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
        for(j=1;j<=5;j++)
        {
            if((i==1 || i==7) && (j>1 && j<5))                 // for first row
                printf("* ");
                
            else if(i==2 && (j==1 || j==6))                  // for second row
                printf("* ");
                
            else if(j==1 && (i>1 && i<7))                   // for third row
                printf("* ");
                
            else if(i==4 && j>2)                           // for middle row
                printf("* ");
                
            else if(j==5 && (i==2 || i==5 || i==6))       // for fifth row
                printf("* ");
                               
            else
                printf("  ");
        }
        printf("\n");
    }

}
 
