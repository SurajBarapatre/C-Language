#include<stdio.h>

// wap to print n to 1 using function

void printReverse(int n)                          // for created function
{
  int i; 
  
  for(i=n; i>=1; i--)                   // for condtion when i becomes greater than 1
  {
  	printf("%d ", i);                  // for print the current value of i
  }
	
}

void main()
{
	int n;
	
	printf("Enter Value of N: ");       // for printing message value of N
	scanf("%d",&n);
	
	printf("\n");
	
	printReverse(n);                        // for function call when user needed
}
