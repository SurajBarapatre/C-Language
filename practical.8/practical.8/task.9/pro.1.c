#include <stdio.h>

void main()

{
    // WAP to get & print 1D array of N elements.
	
	
	int n,i;

    printf("Enter number of elements (N) : "); // for input number of elements
    scanf("%d",&n);

    int a[n];

    
    printf("Enter %d elements:\n", n); // for input array elements
    
	for(i=0; i<n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    printf("\n-------------output---------------\n");

    printf("\nArray elements are :\n"); // for print array elements
    
	for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

}

