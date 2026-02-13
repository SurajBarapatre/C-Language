
#include<stdio.h>
void main()
{
	//wap to check number is positive,negetive or neutral?
int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("%d is a positive number.\n", number);
    } 
    else 
		if (number < 0) {
        printf("%d is a negative number.\n", number);
    } 
    else {
        printf("The number is zero.\n");
    }
}

