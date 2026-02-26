#include<stdio.h>

void main()
{
	//wap to find minimum from 3 number using nested if else.
	
	int a,b,c;
	
	printf("Enter a :");
	scanf ("%d",&a);
	printf("Enter b :");
	scanf ("%d",&b);
	printf("Enter c :");
	scanf ("%d",&c);
	
	if(a<=b && a<=c)
	{
		printf("a is minimum !");
	}
	else if (b<=a && b<=c)
	{
		printf("b is minimum !");
	}
	else if (c<=a && c<=b)
	{
		printf("c is minimum !");
	}
	else
	{
		printf("a,b and c all are equal.");
	}
}

