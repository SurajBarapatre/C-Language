
#include<stdio.h>

void main()

{
	//WAP to Find minimum from given 3 no. using nested if else

	int a,b,c;
	printf(" Enter a :");
	scanf("%d",&a);
	printf(" Enter b :");
	scanf("%d",&b);
	printf(" Enter c :");
	scanf("%d",&c);
	
	if(a<=b)
	{
		printf(" a is minimum !");
	 	
	}
	else
	{
		if(b<=c)
		{
  		    printf(" b is minimum !");	
		}
		else
		{
  		    printf(" c is minimum !");
		}	
	}
}


