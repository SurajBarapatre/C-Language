#include <stdio.h>

void main() 
{
    
	// WAP to perform diagonal and anti diagonal sum of 2D array.	
	
	// 1 2 3                                              // diagonal    -        0 0, 1 1, 2 2,
	// 4 5 6                                          //  anti-diagonal  -        2 0, 1 1, 0 2,
	// 7 8 9
	
	
	int i,j,n;                                    // for 2d array to store elements
    int dsum,adsum,sum=0;                         // n for size of array and dsum & adsum for diagonal and anti-diagonal

    printf("Enter the size of array : ");
    scanf("%d",&n);

    int a[n][n];
    
    printf("\n");

    for(i=0; i<n; i++)                          // for input array elements
	{
        for(j=0; j<n; j++) 
		{
			printf("Enter a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<n; i++)                       // for finding diagonal and anti diagonal sum
	{
        for(j=0; j<n; j++) 
		{

            if(i==j)                            // for condition of diagonal elements
			{
                sum = sum + a[i][j];           // for diagonal sum of elements
            }
        }
    }

    printf("Sum of diagonal = %d",sum);       // for display diagonal sum of elements
    
    printf("\n");
    
    sum=0;
    
	j=2;
    
	for(i=0; i<n; i++)
    {
    	sum = sum + a[i][j];
    	j--;
	}
    
    printf("Sum of anti-diagonal = %d",sum);
}
