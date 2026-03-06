#include<stdio.h>

void main()
{

//    5
//    4 5
//    3 4 5
//    2 3 4 5
//    1 2 3 4 5

	int a,b;
	
	for(a=5; a>=1; a--) // outer loop for each row from 5 to 1
	{
		for(b=a; b<=5; b++) // inner loop to print numbers from a to 5
		{
			printf("%d ",b);
		}
		printf("\n"); // new line after new row
	}
}


