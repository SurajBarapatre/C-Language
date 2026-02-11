
#include<stdio.h>
void main()
{
	//wap swap without using third variable
	
	int a = 18,b = 19;
	printf("before swapping :a =%d,b = %d\n",a,b);
	
	a = a+b;
	b = a-b;
    a = a-b;
	
	printf("after swapping : a = %d,b = %d\n ",a,b);
	
}
