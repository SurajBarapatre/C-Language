

#include<stdio.h>

void main()
{
	// wap to print the multiplication table of number using for while loop
	
	int n, i=1;
	printf("Enter the multiplication of number is :");
	scanf("%d",&n);
	
	for(i=1; i<=10; i++) // for while i++ till i is less then equal to 10
	{
	 printf("%d * %d = %d\n",n,i,n*i); // while you have variable n multiplied with variable i then you get multiplication table                              
	}
	
}
