
#include<stdio.h>

void main()

{
 // extand the program to check eligibility for the next level based on the grade using an if-else statement,
 //print 'congratulations ! You are a eligible for next level'if the grade is from 'A to 'D',print 'please try again
 // next time'if grade if'F'.
 
 char grade;
 
 printf ("Enter Your Grade :");
 scanf  ("%c",&grade);
 
 if(grade>='A' && grade<='D')
 {
  printf("Congratulations ! You are a Eligible For Next Level.");
 }
	else if(grade =='F')
	{
		printf("Please Try Again Next Time !");
	}
	else
	{
	   printf("invalid a grade entered !");
	}
}
