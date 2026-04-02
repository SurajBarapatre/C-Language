#include<stdio.h>

// Develop program to find cubes of all elements from given 2D array using pointer with UDF

void cubesElements(int *ptr, int n)         // for pointer to the first element of 2D array and n for size of array
{
    int i,j;

    printf("\nCubes of All elements:\n\n");   // for input elements

    for(i=0; i<n; i++)                        
    {
        for(j=0; j<n; j++)    
        {
            int num = *(ptr+i*n+j);         // for access element         
            
			printf("%4d ", num*num*num);    // for find cube of element and aligns output in array form
        }
        printf("\n");
    }
}

void main()
{
    int n,i,j;

    printf("Enter array size: ");           // for input size of array
    scanf("%d",&n);

    int a[n][n];
    
    printf("\nEnter array Elements:\n");    // for input elements of array
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    cubesElements(&a[0][0],n);                // for passes the address of first element and function call
}
