#include <stdio.h>

void main()

{
    
	// Write a Program to find the average of a 1D array.
	
	int size, i, sum=0;
    float average;

    printf("Enter array size: "); // for input array size
    scanf("%d",&size);

    int a[size];

    
    printf("Enter array elements:\n"); // for input array Elements
    
	for(i=0; i<size; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
        
		sum = sum + a[i];             // for calculate of sum
    }

    average = (float)sum / size; // for calculate of average

printf("\n-------------output---------------\n");
    
    printf("Average of an Array : %.0f", average);

}

