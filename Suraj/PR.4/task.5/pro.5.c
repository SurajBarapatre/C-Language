#include <stdio.h>

void main()

{
	// develop a program that prints the given full pyramid pattern using a nested for loop.
	
//	       5
 //      4 5 4
//     3 4 5 4 3
//   2 3 4 5 4 3 2
// 1 2 3 4 5 4 3 2 1	
	
	
    int i,j;

    for(i=5; i >=1; i--)
    {
    
        for(j=1; j<i; j++) // for print spaces
        {
            printf("  ");
        }

        // Print ascending numbers
        for(j=i; j<=5; j++)       // for printing ascending numbers
        {
            printf("%d ", j);
        }

        
        for(j=4; j>=i; j--)    // for printing decending numbers
        {
            printf("%d ", j);
        }

        printf("\n");
    }
}

