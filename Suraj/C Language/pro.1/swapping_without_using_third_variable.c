#include<stdio.h>
void main()
{
	//wap swap using third variable.
	
	int a = 18,b = 19,c = 20;
	printf("before swapping :a =%d,b = %d,c =%d\n",a,b,c);
	
	c = b;
	b = a;
    a = c;
	
	printf("after swapping : a = %d,b = %d,c =%d\n",a,b,c);
	
}

