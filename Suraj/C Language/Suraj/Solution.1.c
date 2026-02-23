#include<stdio.h>

void main()
{
	// devlop a program that prints all alphabets from 'a' to 'z' by skipping 3 alphabets using a do while loop
	
	 char i;
	 i='a';
	do 
	{
		printf("%c\n",i);
	    i+=4;
	} while (i<='z');
	
}


