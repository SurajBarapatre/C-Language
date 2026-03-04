
#include<stdio.h>

void main()
{
	// wap to print the multiplication table of number using do...while loop
	
	int n, i=1;
	printf("Enter the multiplication of number :");
	scanf("%d",&n);
	
	do
	{
	 printf("%d * %d = %d\n",n,i,n*i); // while you have variable n multiplied with variable i then you get multiplication table
		i++;                              
	}
	while(i<=10); // while i++ till i is less then equal to 10
	
}
