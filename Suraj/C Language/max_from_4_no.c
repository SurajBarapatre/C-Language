
#include<stdio.h>

void main()

{
	//WAP to Find maximum from given 4 no. using nested if else
	
	int a,b,c,d;
	printf(" Enter a :");
	scanf("%d",&a);
	printf(" Enter b :");
	scanf("%d",&b);
	printf(" Enter c :");
	scanf("%d",&c);
	printf(" Enter d :");
	scanf("%d",&d);
	
	if(a>=b)
	{
		printf(" a is maximum !");
	}
	else
	{
		if(b>=c)
		{
			printf(" b is maximum !");
		}
		else
		{
			if(c>=d)
			{
				printf(" c is maximum !");
			}
			else
			{
				printf(" d is maximum !");
			}
		}
	}	
}


