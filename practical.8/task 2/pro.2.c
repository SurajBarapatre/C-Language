#include <stdio.h>

void main()

{
    
	// wap to print array in reverse order in array
		
	int n,i;
                                    
    printf("Enter size of array : ");    // for input size of array
    scanf("%d", &n);

    int a[n];

    for(i=0; i<n; i++)
    {
		printf("Enter a[%d]: ",n); // for input array elements
        scanf("%d", &a[i]);
    }
    printf("\n-------------output---------------\n");

    printf("Array in reverse order:\n"); // for print array in reverse order
    for(i=n-1; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
    
}

