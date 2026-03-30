#include<stdio.h>

// wap to print hello world 10 times...using function

void printhello()                     // for created function 
{
	int i;                          
	
	for(i=1; i<=10; i++)             // for when n becomes less than 10
	{
		printf("Hello World !\n");   // for display message from user
	}
}
void main()
{
	printhello();                 // for function call when user needed
}
