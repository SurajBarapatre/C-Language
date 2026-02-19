#include<stdio.h>

void main()

{
	//wap to Find minimum from given 5 no. using nested if else.
	
	int a,b,c,d,e;
	
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	printf("Enter c :");
	scanf("%d",&c);
	printf("Enter d :");
	scanf("%d",&d);
	printf("Enter e :");
	scanf("%d",&e);
	
		//a,b,c,d,e
	if(a<b)
	{
		//c,d,e,
		if(a<c)
		{
			//d,e
			if(a<d)
			{
				//e
				if(a<e)
				{
					//a
					printf("a is minimum !");
					
				}
				else
				{
					//e
					printf("e is minimum !");	
				}	
			}
			else
			{
				//d,e
				if(d<e)
				{
					//d
					printf("d is minimum !"); 	
				}
				else
				{
					//e
					printf("e is minimum !");	
				}	
			}	
		}
		else
		{
			//c,d,e
			//d,e
			if(c<d)
			{
				//e
				if(c<e)
				{
					//c
					printf("c is minimum !");
				}
				else
				{
					//e
					printf("e is minimum !");
				}
			}
			else
			{
				//d,e
				if(d<e)
				{
					//d
					printf("d is minimum !");
				}
				else
				{
					//e
					printf("e is minimum !");
			     }
			}
			
		}	
	}
	else
	{
		//b,c,d,e
		//c,d,e
		if(b<c)
		{
			//d,e
			if(b<d)
			{
				//e
				if(b<e)
				{
					//b
					printf("b is minimum !");
				}
				else
				{
					//e
					printf("e is minimum !");
				}
			}
			else
			{
				//d,e
				if(d<e)
				{
					//d
					printf("d is minimum !"); 	
				}
				else
				{
					//e
					printf("e is minimum");
				}
			}	
		}
		else
		{
			//c,d
			if(c<d)
			{
				//e
				if(c<e)
				{
					//c
					printf("c is minimum !");
				}
				else
				{
					printf("e is minimum !");
				 	
				}	 	
			}
			else
			{
				//d,e
				if(d<e)
				{
					//d
					printf("d is minimum !"); 	
				}
				else
				{
					//e
					printf("e is minimum !");
				}
			}	
		}	
	}	
}
