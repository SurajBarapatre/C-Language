#include<stdio.h>

void main()

{
	// wap to print only even elements of array
	
	int n,i;
	
	printf("Enter the Size of array : "); // for input size of array
	scanf("%d",&n);
	
	int a[n];                 
	
	for(i=0; i<n; i++)
	{
		printf("Enter a %d: ",i); // for input elements
		scanf("%d",&a[i]);
	}
	
	printf("Even Elements in the array :\n"); // for print even elements
	for(i=0; i<n; i++)
	{
		if(a[i]%2==0)
		{
			printf("%d ",a[i]);
		}
	}
}


