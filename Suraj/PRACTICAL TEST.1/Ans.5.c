#include<stdio.h>

void main()
{
	// wap to find sum of first and last digit of a number.
	
	int fn,ln,number,sum=0;
	
	printf("Enter Your number :");
	scanf("%d",&number);
	
	ln= number%10;
	
	while(number>=10)
	{
		number = number /10;
	}
	
	fn = number;
	
	sum = fn + ln;
	
	printf("Sum is First and Last digit :%d",sum);
	
}

