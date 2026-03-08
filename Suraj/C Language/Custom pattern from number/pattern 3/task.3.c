#include<stdio.h>

void main()
{
	
//        1 2 3 4 5 5 4 3 2 1
//        1 2 3 4     4 3 2 1
//        1 2 3         3 2 1
//        1 2             2 1
//        1                 1


int i,j,k=5;

for(i=5; i>=1; i--) // for left side numbers pattern
{
	for(j=1; j<=i; j++)
	{
		printf("%d ", j);
	}
	
	for(j=1; j<=(k-i); j++) // for middle space
	{
		printf("    ");
	}
	
	{
	for(j=i; j>=1; j--)	// for right side numbers pattern
	{
		printf("%d ", j);
	}
	}
	printf("\n");
	
	
}


}


