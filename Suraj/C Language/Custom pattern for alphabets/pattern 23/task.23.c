#include<stdio.h>

void main()

{
	
//  *           *
//  *           *
//  *           *
//  *           *
//  *           *
//  *     *     *
//  *   *   *   *	
		
	
    int i,j;

    for(i=1; i<=7; i++)
    {
        for(j=1; j<=7; j++) // for two outer verical lines
        {
            if(j==1 || j==7 || 
               (i>=6 && (j==i-2|| j==10-i))) // for creating inner v shape line
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

}

