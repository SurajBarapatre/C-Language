#include<stdio.h>

void main()
{
	int a,b;
	
	for(a=1; a<=5; a++)
	{
		for(b=a; b<=5; b++)
		{
			printf("%d ",b);
		}
		printf("\n");
	}
}

