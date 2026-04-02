#include<stdio.h>

// develop a program that finds the length of a string using a pointer

int stringLength(char *str)      // for create length of string
{

int length =0;

while(*str!='\0')               // for loop continues until string is null character
{
	length++;                  // for increment in length 
	
	str++;	                   // for increment in pointer
	
}
   printf("The Length of string :%d\n",length);   // for input length of string
}

int main()
{
	char name[20];
	
	printf("Enter a string : ");       // for display string by user  
	gets(name);
	
	printf("\n");
	
	stringLength(name);            // for function call at length of string
	
}
