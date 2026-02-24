
#include<stdio.h>

void main()
{
	// wap to find leap years from year 2000 to 3000 using for while loop
	
	int starting_year = 2000, ending_year = 3000;
	
	for(starting_year = 2000; starting_year<=ending_year; starting_year += 4;) // for while starting year less then equal to ending year and leap year comes at after in 4 years
	{
		printf("%d\n", starting_year);
		
	}

}
