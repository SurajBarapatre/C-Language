#include<stdio.h>

// wap to print 1 to n using function

void printNum(int n)                          // for created function
{
  int i; 
  
  for(i=1; i<=n; i++)                   // for condtion when i becomes less than n
  {
  	printf("%d ", i);                  // for print the current value of i
  }
	
}

void main()
{
	int n;
	
	printf("Enter Value of N: ");       // for printing message value of N
	scanf("%d",&n);
	
	printNum(n);                        // for function call when user needed
}
