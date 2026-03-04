
#include<stdio.h>

void main()
{
	
	// wap to print sum 1 to n using do... while loop
	
	// starting point = 1, ending point =n
	int n, i=1, sum=0;
	
	printf("Enter n: ");
	scanf("%d",&n);
	
	do
	{
		sum += i; // do...while you have variable sum add equal too in variable i you will get exact total sum
		i++;
	}
	while(i<=n); // while i is less then equal to n
	printf("sum = %d\n",sum);
}
