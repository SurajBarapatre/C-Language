
#include<stdio.h>

void main ()

{
	// Write C program to convert temperature from degree Celsius to Fahrenheit (f=(9/5*c)+32)
	
	int celsius;
	 
	printf("Enter the temperature in Celsius :");
	scanf("%d",&celsius);
	
    float  Fahrenheit = (celsius*1.8)+32;
	printf("The Temperature in Fahrenheit:%.0f",fahrenheit);
}
