#include<stdio.h>

void main()
{
	//wap to print grade of based on user given percentage.
	
	int percentage;
	char grade;
	
	printf("Enter Your Percentage : ");
	scanf ("%d",&percentage);
	
	
	grade=(percentage>=91 && percentage<=100)?'A':
	       
	       (percentage>=81 && percentage<=90)?'B':
	        	        
	       (percentage>=71 && percentage<=80)?'C':
	       
	       (percentage>=61 && percentage<=70)?'D':
	      
	       (percentage>=50 && percentage<=60)?'E':'F';

      	printf("Your grade is %c",grade);
		      
	      
	      
	      
	      
	
	
	

}

