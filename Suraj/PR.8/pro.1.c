#include<stdio.h>

// develop a program that finds the length of a string using a pointer

int stringLength(char *str)
{

int length =0;

while(*str!='\0')
{
	length++;
	
	str++;	
	
}
   printf("The Length of string :%d\n",length);
}

int main()
{
	char name[20];
	
	printf("Enter a string : ");
	scanf("%s",&name);
	
	printf("\n");
	
	stringLength(name);
	
}
