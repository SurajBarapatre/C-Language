
#include<stdio.h>

void main()
{
	int i,j,k;
	char k='A';
	
	for(i='A'; i<='E'; i++)
	{
		for(j='A'; j<=i; j++)
		{
			printf("%c ",k);
			
			k++;
		}
		printf("\n");
	}
}


