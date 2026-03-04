

#include<stdio.h>

void main()
{
  //wap to print 1 to n using do...while loop
	
	int n, i=1;
	printf("Enter n: ");
	scanf("%d",&n);
	
	do
	{
		printf("%d\n",i);
		i++;
	}
	while(i<=n); // do...while i++ till i is less then equal to n
}

