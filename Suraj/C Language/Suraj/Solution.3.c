
#include<stdio.h>

void main()
{
	// devlop a program to find the sum of a number first and last digits
	
	int num, firstdigit, lastdigit, sum=0;
	
	printf("Enter a Number :");
	scanf ("%d",&num);
	
	lastdigit = num % 10; // find a last digit
	
	while(num>=10)
	{
		num = num / 10;
	}
	firstdigit = num;  // find a firstdigit
	
	//Calculate sum
	
	sum = firstdigit + lastdigit;
	
	printf("Sum of the firstdigit and lastdigit = %d",sum);
	
}
