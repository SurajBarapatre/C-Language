#include<stdio.h>

// Create a C program to find the largest element in an 1D array.
	
void main()

{
    int n,i;

    
    printf("Enter array size: ");                  // for input size of array
    scanf("%d",&n);

    int a[n];

    printf("\n");
    
    printf("Enter the array elements:\n");       // for input elements
    for(i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d", &a[i]);
    }

printf("\n");
                                                
    int max=a[0];

    
    for(i=1; i<n; i++)                     // for find to largest element
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }

    
    printf("The Largest element is = %d",max);   // for display of largest element 
}







