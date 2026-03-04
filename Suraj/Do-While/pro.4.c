

#include<stdio.h>

void main()
{
  //wap to print n to 1 using do...while loop
	
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	
	do
	{
		printf("%d\n",n);
		n--;
	}
	while(n>=1);  // do...while i-- till i is greater then equal to n
}

