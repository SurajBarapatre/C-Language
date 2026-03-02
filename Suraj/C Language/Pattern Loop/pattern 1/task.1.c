
#include<stdio.h>

void main()
{
	int i,j;
	
	for(i=1; i<=5; i++)
	{	
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	} 
}

//a=1, 1<=5:true,     

//a=1, 1<=5:true, b=1, 1<=1:true,

//a=2, 2<=5:true, b=2, 2<=2:true,

//a=3, 3<=5:true, b=3, 3<=3:true,

//a=4, 4<=5:true, b=4, 4<=4:true,

//a=5, 5<=5:true, b=5, 5<=5:true,

