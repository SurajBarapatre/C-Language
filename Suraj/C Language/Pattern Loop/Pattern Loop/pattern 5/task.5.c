#include<stdio.h>

void main()
{
	int a,b;
	
	for(a=5; a>=1; a--) // outer loop for each row from 5 to 1
	{
		for(b=a; b<=5; b++) // inner loop to print numbers from a to 5
		{
			printf("%d ",b);
		}
		printf("\n"); // new line after new row
	}
}

