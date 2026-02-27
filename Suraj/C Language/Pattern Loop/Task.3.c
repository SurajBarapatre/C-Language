#include<stdio.h>

void main()
{
	int a,b;
	
	for(a=5; a>=1; a--)
	{
		for(b=a; b>=1; b--)
		{
			printf("%d",a);
		}
		printf("\n");
	}
}

