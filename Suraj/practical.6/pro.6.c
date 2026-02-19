#include<stdio.h>

void main ()

//wap to find maximum from any 4 variables using else if ladder

{

int a,b,c,d;

printf("enter a : ");
scanf ("%d",&a);
printf("enter b : ");
scanf ("%d",&b);
printf("enter c : ");
scanf ("%d",&c);
printf("enter d : ");
scanf ("%d",&d);

//a,b,c,d

if (a>=b && a>=c && a>=d)
{ 
 printf(" a is maximum !");
}

else if (b>=a && b>=c && b>=d)
{
 printf(" b is maximum !");
}
else if (c>=a && c>=b && c>=d)
{
 printf ("c is maximum !");
}
else if (d>=a && d>=b && d>=c)
{
 printf("d is maximum !");
}
else
{
 printf("a, b, c, and d all are equal !");	
}
	
}


