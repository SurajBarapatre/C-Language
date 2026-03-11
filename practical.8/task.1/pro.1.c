#include<stdio.h>

void main()

{
	// wap to create an array by user define size and input and display whole array
	
	int n,i;
	
	printf("Enter Size of array : "); // for user size of array
	scanf("%d",&n);
	
	int a[n];                         // user defined size array
	
	for(i=0; i<n; i++)
	{
		printf("Enter a [%d]: ",i); // for input elements
		scanf("%d",&a[i]);
	}
	printf("\n-------------output---------------\n");
	
	printf("Array whole Elements :"); // for display elements
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
}


