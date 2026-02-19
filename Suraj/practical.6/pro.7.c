
#include<stdio.h>

void main ()

//wap to find maximum from any 5 variables using else if ladder

{

int a,b,c,d,e;

printf("enter a : ");
scanf ("%d",&a);
printf("enter b : ");
scanf ("%d",&b);
printf("enter c : ");
scanf ("%d",&c);
printf("enter d : ");
scanf ("%d",&d);
printf("enter e : ");
scanf ("%d",&e)

//a,b,c,d,e

if (a>b && a>c && a>d && a>e)

{ 
 printf(" a is maximum !");
}

else if (b>a && b>c && b>d && b>e)
{
 printf(" b is maximum !");
}
else if (c>a && c>b && c>d && c>e)
{
 printf ("c is maximum !");
}
else if (d>a && d>b && d>c && d>e)
{
 printf("d is maximum !");
}
else if (e>a && e>b && e>c && e>d)
{
 printf (" e is maximum !");
}
else 
{
printf("a,b,c,d and e all are equal !");
}
	
}


