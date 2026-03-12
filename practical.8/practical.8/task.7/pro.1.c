#include <stdio.h>

void main() 

{
    
	//Write a Program to find the length of a 1D array.
	
	
	int size, i;

    printf("Enter array size: "); // for input array size
    scanf("%d", &size);

    int a[size];

    printf("Enter array elements:\n"); // for input array Elements
    
	for(i=0; i<size; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    
    printf("\n-------------output---------------\n");

    printf("\n Length of an Array : %d", size); // for length of array

}

