#include <stdio.h>

// print of multiplication table of any number using function


void Table(int num)                              // for created a function and parameter printing table of number
{
    int i;
    
    for(i=1; i<=10; i++)
    {
        printf("%d X %d = %d\n",num,i,num*i);         // for condition for printing table of number
    }
    printf("\n");
}

void main()                                           // for entry point of the code
{
    int n;

    printf("Enter a number of multiplication table : ");  // for get input by user
    scanf("%d",&n);
    
    printf("\n");

    Table(n);                            // for function call and display table of number


}

