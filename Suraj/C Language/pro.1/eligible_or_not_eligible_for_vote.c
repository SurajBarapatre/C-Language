#include<stdio.h>

void main()
{
	//wap to check user is eligible for vote or not?
	
	int age;
	printf("Enter Your age : ");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("you are eligible for vote");
	}
	else 
	{
		printf("you are not eligible for vote ! ");
	}
	
}

