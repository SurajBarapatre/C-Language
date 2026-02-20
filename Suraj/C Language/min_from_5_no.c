
#include<stdio.h>

void main()

{
	//WAP to Find minimum from given 5 no. using nested if else
	
	int a,b,c,d,e;
	printf(" Enter a :");
	scanf("%d",&a);
	printf(" Enter b :");
	scanf("%d",&b);
	printf(" Enter c :");
	scanf("%d",&c);
	printf(" Enter d :");
	scanf("%d",&d);
	printf(" Enter e :");
	scanf("%d",&e);
	
	if(a<=b)
	{
		printf(" a is minimum !");
	}
	else
	{
		if(b<=c)
		{
			printf(" a is minimum !");
		}
		else
		{
			if(c<=d)
			{
				printf(" c is minimum !");
			}
			else
			{
				if(d<=e)
				{
					printf(" d is minimum !");
				}
				else
				{
					printf(" e is minimum !");
				}
			}
		}
	}
}


