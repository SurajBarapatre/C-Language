#include <stdio.h>

void main()

{
    
	// Write a Program to perform the addition operation of two 1D arrays & and store it in another array. 
	// Keep in mind that both array sizes must be the same.
	
	
	int size, i;

    printf("Enter array size: "); // for input array size
    scanf("%d", &size);

    int a[size], b[size], c[size];

    // Input elements of array A
    printf("\n Enter array A's elements:\n"); // for input elements of array A
    
	for(i=0; i<size; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }

    printf("\nEnter array B's elements:\n"); // for input elements of array B
    
	for(i=0; i<size; i++)
    {
        printf("b[%d]=", i);
        scanf("%d", &b[i]);
    }

    for(i=0; i<size; i++) // for addition of array A and B
    {
        c[i] = a[i] + b[i];
    }


printf("\n-------------output---------------\n");

    printf("\nArray C is : ");
    
    for(i=0; i<size; i++)
    {
        printf("%d", c[i]);
        if(i<size-1)
        {
            printf(", ");
        }
    }

}
