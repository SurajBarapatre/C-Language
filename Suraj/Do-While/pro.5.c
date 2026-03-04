


#include<stdio.h>

void main()
{
  //wap to print even number from 1 to n using do...while loop
	
	// starting point = 1, ending point = n
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	
	do
	{
	  if(n%2==0) // if n is reminder 2 then you get even number	
	  {
	  	printf("%d\n",n);
	  }	
		n--;
	}
	while(n>=1);  // do...while n-- till n is greater then equal to 1
}

