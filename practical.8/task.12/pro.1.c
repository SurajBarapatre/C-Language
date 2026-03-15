#include <stdio.h>

void main() 
{
    
	// Write a Program to perform the addition operation of two 1D arrays & and store it in another array. 
	//Keep in mind that both array sizes must be the same.
	
	
	int a[10], b[10], c[10];                          // for array of elements
    int i,n;                                          // n for size of arrays of elements         

    printf("Enter array size: ");
    scanf("%d",&n);

    printf("\nEnter array A's elements:\n");        // for input of array A element
    
	for(i=0; i<n; i++) 
	{
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    printf("\nEnter array B's elements:\n");  // for input of array B element
    
	for(i=0; i<n; i++) 
	{
        printf("b[%d]= ",i);
        scanf("%d", &b[i]);
    }

    for(i=0; i<n; i++)                   // for sum of array A and array B elements
	{
        c[i] = a[i] + b[i];
    }

    printf("\nArray C is: ");              // for display of sum of elements
    
    for(i=0; i<n; i++) 
	{
        printf("%d ",c[i]);
    }

}

