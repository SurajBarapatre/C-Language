#include<stdio.h>

void main()
{
  //   5
//     4 4
//     3 3 3
//     2 2 2 2
//     1 1 1 1 1


	int a,b;
	
	for(a=5; a>=1; a--) // outer loop for each row from 5 to 1
	{
		for(b=1; b<=6-a; b++) // inner loop print "i" for required numbers to times
		{
			printf("%d ",a);
		}
		printf("\n"); // new line after new row
	}
	
}


