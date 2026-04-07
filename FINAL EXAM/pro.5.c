#include<stdio.h>

// Print a below pattern using nested for loop in C language:

//1

//4 4

//9 9 9

//16 16 16 16

//25 25 25 25 25

void main() 
{
    int i,j;                                         

    for(i=1; i<=5; i++)                                     // for loop until when i is less than 5
	{
        for(j=1; j<=i; j++)                                 // for loop until when j is less than i
		{
            printf("%d ",i*i);                              // for squares of variable i value 
        }
        printf("\n");                                       // for new line
    }
}

