#include <stdio.h>

void main() 
{
    
	// WAP to perform diagonal and anti diagonal sum of 2D array.	
	
	
	int a[10][10], i, j, n;                       // for 2d array to store elements
    int dsum = 0, adsum = 0;                      // n for size of array and dsum & adsum for diagonal and anti-diagonal

    printf("Enter the order of square array : ");
    scanf("%d",&n);

    printf("Enter the elements of the array:\n");

    for(i=0; i<n; i++)                          // for input array elements
	{
        for(j=0; j<n; j++) 
		{
			printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0; i<n; i++)                       // for finding diagonal and anti diagonal sum
	{
        for(j=0; j<n; j++) 
		{

            if(i==j)                       // for condition of diagonal elements
			{
                dsum = dsum + a[i][j];   // for diagonal sum of elements
            }

            if(i+j==n-1)                 // for condition of anti-digonal elements
			{
                adsum = adsum + a[i][j]; // for Anti-diagonal sum of elements
            }

        }
    }

    printf("Sum of main diagonal = %d\n", dsum);  // for display diagonal sum of elements
    printf("Sum of anti-diagonal = %d\n", adsum); // for display anti-diagonal sum of elements
}
