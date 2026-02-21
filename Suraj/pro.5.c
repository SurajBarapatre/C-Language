

#include<stdio.h>

void main()
{
  //wap to print even number from 1 to n using while loop
	
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	
	while(n>=1)  // while n-- till n is greater then 1
	{
	  if(n%2==0) // if n is reminder 2 then you get even number	
	  {
	  	printf("%d\n",n);
	  }	
		n--;
	}
}

