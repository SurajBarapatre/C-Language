#include<stdio.h>

// Write a C program to find square of each elements of an 1D array using Pointer.

void main()

{
    int n,i;
                                                                                                 
    printf("Enter array size: ");                         // for input size of array 
    scanf("%d",&n);

    int a[n];
    
    int *ptr;                                             // for pointer to store of address of array

    printf("\n");
    
    printf("Enter array elements :\n");                   // for input elements
    
	for(i=0; i<n; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
                           
    ptr=a;                                                          // for first element of array 

    
    printf("\nThe Squares elements of array is : \n");              // for find squares elements of array
    
	for(i=0; i<n; i++)
    {
        printf("%d ",(*(ptr + i))*(*(ptr + i)));
    }

}
