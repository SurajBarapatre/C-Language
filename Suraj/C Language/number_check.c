
#include<stdio.h>

void main()

{
	//wap to check number is negative,positive or neutral
	
	int num;
	
	printf(" Enter a num :");
	scanf("%d",&num);
	
	if(num>=0)
	{
		if(num==0)
		{
			printf(" Number is neutral ");
		}
		else
		{
			printf(" Number is positive ");
		}
	}
	else
	{
		printf(" Number is negative ");	
	}	 
}
