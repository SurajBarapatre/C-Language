#include<stdio.h>

// wap to print start to end using function

void printRange(int n1, int n2)    // for created function
{
	int i;
	
	for(i=n1; i<=n2; i++)         // for condition when start continue until then end 
	{
		printf("%d ", i);             // for print the current value of i
	}
}

void main()
{
	int n1,n2;                  // n1 for starting value and n2 for ending value
	
	printf("Enter Start Value: ");     // for printing starting value
	scanf ("%d",&n1);
	
	printf("Enter End Value: ");        // for printing ending value
	scanf ("%d",&n2);
	
	printf("\n");                      // for get new line
	
	printRange(n1,n2);            // for funtion when user needed
}



