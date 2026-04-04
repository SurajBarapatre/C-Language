#include <stdio.h>

//Calculator:-

// Devlop a menu driven a program to implement arithmetic operations such as a +, -, *, / and % using UDF, switch case and looping.
// make sure that the program is endless until a certain letter is pressed.


int addition(int a,int b)                                    // created function for addition
{
    return a + b;
}
int subtraction(int a,int b)                               // created function for subtraction
{
   return a - b;
}
int multiplication(int a,int b)                           // created function for multiplication
{
    return a * b;
}
int division(int a,int b)                                // created function for division
{
    return a / b;
}
int module(int a,int b)                                  // created function for module
{
    return a % b;
}

void main()                                       
{
    int a,b,answer,choice;                                  // for user input 

    while(1)
    {
        printf("\n");
        
        printf("\n----Calculator Menu----\n");                // enter control loop for user instruction using UDF function
        printf("\nPress 1 for Addition{+}");
        printf("\nPress 2 for Subtraction {-} ");
        printf("\nPress 3 for Multiplication {*} ");
        printf("\nPress 4 for Division {/}");
        printf("\nPress 5 for Module {%%} ");
        printf("\nPress 0 for Exit\n");

        printf("\nEnter Your Choice:");                   // for choice by user
        scanf("%d",&choice);
        
        printf("\n");

        if (choice==0)
        {
            printf("You are Exit From Calculator.\n");    // for exit by user
            break;
        }

        printf("Enter A :");                              // for input by user choice
        scanf("%d",&a);
        
        printf("Enter B :");
        scanf("%d",&b);

        switch(choice)                                     // for executed choice based on by user
        {
        case 1:                                            // this case get answer of aadition
            answer = addition(a,b);
            printf("\nAddition of a and b is : %d",answer);
            break;
            
        case 2:                                             // this case get answer of subtraction 
            answer = subtraction(a,b);
            printf("\nSubtraction of a and b is : %d",answer);
            break;
            
        case 3:                                              // this case get answer of multiplication
            answer = multiplication(a,b);
            printf("\nMultiplication of a and b is : %d",answer);
            break;
            
        case 4:                                              // this case get answer of division
            answer = division(a,b);
            printf("\nDivision of a and b is : %d",answer);
            break;
            
        case 5:                                              // this case get answer of division
            answer = module(a,b);
            printf("\nModule of a and b is : %d",answer);
            break;
            

        default:
            printf("\nInvalid Your choice !");             // for invalid input by user
            break;
        }
    }
}
