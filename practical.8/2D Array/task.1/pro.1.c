#include<stdio.h>

void main()
{
	
	// WAP to get & print 2D array of N elements.
	
	int n,i,j;
	
	printf("Enter size of 2D array (N): "); // for input size of 2d array 
    scanf("%d",&n);

    int a[n][n];

    printf("Enter elements of the 2D array:\n"); // for input elements
    
	for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d", &a[i][j]);
        }
        printf("\n-------------output---------------\n");
    }

    printf("2D Array elements are:\n"); // for print 2D array
    
	for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }


}

