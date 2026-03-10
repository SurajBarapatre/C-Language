#include<stdio.h>

void main ()

{
	// Write C program to convert temperature from degree Celsius to Fahrenheit (f=(9/5*c)+32)
	
	int celsius;
	 
	printf("Enter the temperature in Celsius :"); // for temperature in celsius
	scanf("%d",&celsius);
	
    float  fahrenheit = (celsius*1.8)+32;                     // for fahrenheit convert into celsius
	printf("The Temperature in Fahrenheit: %.0f",fahrenheit);
}

