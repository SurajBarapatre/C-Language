#include<stdio.h>

void main()
{
	
	// wap to calculate the factorial number of using for while loop
	
	int n, i=1, factorial=1;
	printf("Enter the factorial number: ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++) // for while i is less then equal to n
	{
		factorial = factorial * i; // while you have variable factorial multiplied with variable i you will get exact factorial number
	}
	printf("the factorial number is = %d",factorial);
}
