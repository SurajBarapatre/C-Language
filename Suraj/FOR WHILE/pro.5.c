
#include<stdio.h>

void main()
{
  //wap to print even number from 1 to n using for while loop
  
  // starting point = 1, ending point = n
	int n,i;
	printf("Enter n: ");
	scanf("%d",&n);
	
	for(i=1; n>=1; n--)  // for while n-- till n is greater then equal to 1
	{
	  if(n%2==0) // if n is reminder 2 then you get even number	
	  {
	  	printf("%d\n",n);
	  }	

	}
}

