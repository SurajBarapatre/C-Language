
#include<stdio.h>

void main()
{
	
	// wap to calculate the factorial number of using while loop
	
	int n, i=1, factorial=1;
	printf("Enter the factorial number: ");
	scanf("%d",&n);
	
	while(i<=n) // while i is less then equal to n
	{
		factorial = factorial * i; // while you have variable factorial multiplied with variable i you will get exact factorial number
		i++;
	}
	printf("the factorial number is = %d",factorial);
}
