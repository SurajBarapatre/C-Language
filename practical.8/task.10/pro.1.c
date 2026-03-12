#include <stdio.h>

void main()

{
    
	// WAP to print the multiplication table of each array element
	
	
	int n,i,j;

    printf("Enter number of elements: "); // for input numbe of elements
    scanf("%d",&n);

    int a[n];

    printf("Enter %d elements:\n", n); // for input array elements
    
	for(i=0; i<n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    
    printf("\n-------------output---------------\n");

    for(i=0; i<n; i++)              // for print multiplication table of each elements.
    {
        printf("\n Multiplication table of %d :\n", a[i]);

        for(j=1; j<=10; j++)
        {
            printf("%d*%d=%d\n", a[i],j, a[i]*j);
        }
    }

}
