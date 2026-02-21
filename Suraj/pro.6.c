


#include<stdio.h>

void main()
{
  //wap to print odd number from n to 1 using while loop
  
  // starting point =1, ending point=n
	
	int n, i=1;
	printf("Enter n: ");
	scanf("%d",&n);
	
	while(i<=n)  // while i++ till i is less then n
	{
	  if(i%2==1) // if i is reminder 1 then you get odd number	
	  {
	  	printf("%d\n",i);
	  }	
		i++;
	}
}

