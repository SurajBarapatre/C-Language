#include<stdio.h>

void main ()

//wap to find maximum from any 3 variables using else if ladder

{

int a,b,c;

printf ("enter a :");
scanf ("%d",&a);
printf("enter b :");
scanf ("%d",&b);
printf( "enter c :");
scanf ("%d",&c);

//a,b,c

if (a>=b && a>=c)

{
	printf(" a is maximum !");
}

else if (b>=c && b>=a)

{
	printf("b is maximum !");
}

else if (c>=a && c>=b)

{
	printf("c is maximum !");
}

else

{
	printf("a ,b , and c all are equal !");
}

}

