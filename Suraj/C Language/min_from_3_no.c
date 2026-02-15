
#include<stdio.h>

void main()

{
	//WAP to Find min. from given 3 no. using nested if else

	int a,b,c;
	printf(" Enter a :");
	scanf("%d",&a);
	printf(" Enter b :");
	scanf("%d",&b);
	printf(" Enter c :");
	scanf("%d",&c);
	
	if(a<b)
	{
		printf(" a is min.");
	 	
	}
	else
	{
		if(b<c)
		{
  		    printf(" b is min.");	
		}
		else
		{
  		    printf(" c is min.");
		}	
	}
}
