
#include<stdio.h>

void main()
{
	
	// wap to calculate the factorial number of using do...while loop
	
	int n, i=1, factorial=1;
	printf("Enter the factorial number: ");
	scanf("%d",&n);
	
	do
	{
		factorial *= i; // do...while you have variable factorial multiplied with variable i you will get exact factorial number
		i++;
	}
	while(i<=n); // while i is less then equal to n
	printf("the factorial number is = %d\n",factorial);
}
