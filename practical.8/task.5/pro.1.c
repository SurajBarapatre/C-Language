#include<stdio.h>

void main()
{
	
	// wap to find maximum and minimum value from the array
	
	
	int a[6] = {0,5,2,7,9,1};
	
	int i;
	
	int max = a[0];      // for declare value of array 
	int min = a[0];
	
	for(i=1; i<6; i++)
	{
		if(max < a[i])       // for to find maximum value
		{
			max = a[i];
		}
		if(min > a[i])      // for to find minimum value
		{
			min = a[i];
		}
	}
	printf("%d\n%d",max,min); // for display maximum and minimum value
}

