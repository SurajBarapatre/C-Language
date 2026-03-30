#include<stdio.h>

// wap to print 1 to 10 without using loop...

void printNum(int n)           // for created function
{
    if(n<=10)                   // for condition n becomes less than 10
    {
        printf("%d ",n);        // for print the current value of n
        
		printNum(n+1);           // for recursive call the function
    }
}

void main()
{
    printNum(1);       // for function call then it becomes 1,2,..10 but stops when n=11

}
