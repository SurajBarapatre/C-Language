#include<stdio.h>

void main()

{
	// wap to find sum of all elements of array
	
	int n,i,sum=0;
	
	printf("Enter the Size of array : "); // for input size of array
	scanf("%d",&n);
	
	int a[n];                 
	
	for(i=0; i<n; i++)
	{
		printf("Enter a %d: ",i); // for input elements
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		sum = sum + a[i];
	}
	printf ("Sum of All Elements = %d",sum);
}



