#include<stdio.h>

void main()
{
	//devlop a program to count the total number of digits in a number
	
	int num,count;                          //num=752
	printf("Enter the total digit Number :");
	scanf("%d",&num);
	
	while(num>0)                 // count = 3
	{
	  num = num / 10;
	  
	  count++;
	} printf("Count digit number : %d",num);
}

