
#include<stdio.h>

void main()
{
  //wap to print n to 1 using for while loop
	
	int n,i;
	printf("Enter n: ");
	scanf("%d",&n);
	
	for(i=n ;n>=1; n--)  // for while i-- till i is greater then equal to n
	{
		printf("%d\n",n);
	}
}

