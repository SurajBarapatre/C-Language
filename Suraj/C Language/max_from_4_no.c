
#include<stdio.h>

void main()

{
	//WAP to Find max. from given 4 no. using nested if else
	
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
		printf(" a is max.");
	}
	else
	{
		if(b>=c)
		{
			printf(" b is max.");
		}
		else
		{
			if(c>=d)
			{
				printf(" c is max.");
			}
			else
			{
				printf(" d is max.");
			}
		}
	}	
}

