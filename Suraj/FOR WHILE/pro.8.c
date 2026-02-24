
#include<stdio.h>

void main()
{
	
	// wap to print sum 1 to n using for while loop
	
	// starting point = 1, ending point = n
	
	int n, i, sum=0;
	printf("Enter n: ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++) // for while i is less then equal to n
	{
		sum = sum + i; // while you have variable sum add equal too in variable i you will get exact total sum
	}
	printf("sum = %d",sum);
}
