#include <stdio.h>

void main() 

{
    
	// develop a program that finds all the negative elements from 1D array
	
	int n,i;
    
    int a[5] = {2,-4,1,-3,-5};              // for declare size of array

    printf("Enter the size of array: ");   // for input size of array
    scanf("%d",&n);
    
    
    for(i=0; i<n; i++) 
	{
		printf("Enter [%d]elements:",i);    // for input array elements
        scanf("%d",&a[i]);
    }
    printf("\n-------------output---------------\n");

    printf("Negative elements in the array are: ");      // for display negative elements of array

    for(i=0; i<n; i++) 
	{
        if(a[i]<0) 
		{
            printf("%d ",a[i]);
        }
    }
}

