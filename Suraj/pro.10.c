
#include<stdio.h>

void main()
{
	// wap to print the multiplication table of number using while loop
	
	int n, i=1;
	printf("Enter the multiplication of number :");
	scanf("%d",&n);
	
	while(i<=10) // while i++ till i is less then 10
	{
	 printf("%d * %d = %d\n",n,i,n*i); // while you have variable n multiplied with variable i then you get multiplication table
		i++;                              
	}
	
}
