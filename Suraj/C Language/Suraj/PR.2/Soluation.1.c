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
						
			printf(" Your Grade is %c\n", grade);
			
	//further,extend the program to provide additional commnents based on the grade using switch-case statement.
	// for exa.,if the grade is 'A',then print "Excellent work",if the grade is 'B'then print "Well done",if the grade
	//is 'C',then print "Good job",if the grade is 'D',then print "You Passed, but you could do Better",if the grade is
	//'F',the print "Sorry ! Your Failed, Please try Again Next Time".
	
	switch(grade)   // Solution.2-
	{
		case 'A': printf ( "Excellent Work !");
		break;
		
		case 'B': printf ( "Well Done !");
		break;
		
		case 'C': printf ( "Good Job !");
		break;
		
		case 'D': printf ("You Passed, But you could do Better");
		break;
			
		default : printf("Sorry! Your Failed, Please Try again Next Time.");
	}

// extand the program to check eligibility for the next level based on the grade using an if-else statement,
 //print 'congratulations ! You are a eligible for next level'if the grade is from 'A to 'D',print 'please try again
 // next time'if grade if'F'.
 
  
 if(grade>='A' && grade<='D')
 {
  printf("Congratulations ! You are a Eligible For Next Level.\n");
 }
	else
	{
		printf("Your Not eligible for next level.\n");
	}
	
}
