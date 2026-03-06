#include<stdio.h>

void main()
{ 
	
	//	  1 2 3 4 5
//        2 3 4 5
  //      3 4 5
   //     4 5
   //     5

                          
	int a,b;
	
	for(a=1; a<=5; a++) // outer loop for each starting number
	{
		for(b=a; b<=5; b++) // inner loop for printing number starting for 'a'.
		{
			printf("%d ",b);
		}
		printf("\n"); // new line after new row
	}
}



