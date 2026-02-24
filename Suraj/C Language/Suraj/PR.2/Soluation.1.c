#include<stdio.h>

void main()
{
	//devlop a program that makes a score out of 100 as input from the user and calculates the corresponding grade using a ternary operator,
	//allocate grades from A to F various ranges.
	
	int score; 
	char grade;
	printf("Enter your Score :");
	scanf ("%d",&score);
	
	//score 81 to 100 - grade A
	//score 71 to 80 - grade B
	//score 61 to 70 - grade C
	//score 51 to 60 - grade D
	//score 41 to 50 - grade E
	//score 0 to 40 - grade F
	
	 grade =(score>=81 && score<=100)?'A':
		    (score>=71 && score<=80)? 'B':
		    (score>=61 && score<=70)? 'C':
			(score>=51 && score<=60)? 'D':
			(score>=41 && score<=50)? 'E':'F';
						
			printf(" Your Grade is %c",grade);
	

}
