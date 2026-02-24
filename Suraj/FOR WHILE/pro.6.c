


#include<stdio.h>

void main()
{
  //wap to print odd number from n to 1 using for while loop
  
  // starting point =n, ending point=1
	
	int n,i;
	printf("Enter n: ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)  // for while i++ till i is less then equal to n
	{
	  if(i%2==1) // if i is reminder 1 then you get odd number	
	  {
	  	printf("%d\n",i);
	  }	
	
	}
}

