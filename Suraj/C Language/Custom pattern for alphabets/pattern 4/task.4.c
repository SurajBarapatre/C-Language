#include<stdio.h>

void main()

{
	
//	  * *
  //  *   *
 //   *    *
//    *    *
//    *    *
 //   *   *
 //   * *
 
 int i,j;
 
 for(i=1; i<=7; i++) // for full row
 {
 	printf("* ");
 	
 	if(i==1 || i==7) //
 	printf(" ");
 	
 	else if (i==2 || i==6)
 	printf("  ");
 	
 	else
 	
 	printf("   ");
	
    printf("*\n");
 }
 
}

