
#include<stdio.h>

void main()
{
	// wap to find leap years from year 2000 to 3000 using do...while loop
	
	int starting_year = 2000, ending_year = 3000;
	
	do
	{
		printf("%d\n", starting_year);
		
		starting_year += 4;  // leap year comes at after in 4 years
	}
	while(starting_year<=ending_year); // while starting year less then equal to ending year

}
