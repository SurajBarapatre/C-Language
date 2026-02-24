
#include<stdio.h>

void main()
{
	
	// wap to print sum 1 to n using while loop
	
	//starting point = 1, ending point = n
	
	int n, i=1, sum=0;
	
	printf("Enter n: ");
	scanf("%d",&n);
	
	while(i<=n) // while i is less then equal to n
	{
		sum = sum + i; // while you have variable sum add equal too in variable i you will get exact total sum
		i++;
	}
	printf("sum = %d",sum);
}
