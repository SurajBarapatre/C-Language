

#include<stdio.h>

void main()
{
  //wap to print 1 to n using while loop
	
	int n, i=1;
	printf("Enter n: ");
	scanf("%d",&n);
	
	while(i<=n) // while i++ till i is less then n
	{
		printf("%d\n",i);
		i++;
	}
}

