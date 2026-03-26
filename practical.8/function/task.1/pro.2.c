#include <stdio.h>

// Function to calculate sum
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2, result;

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function call
    result = sum(num1, num2);

    // Output result
    printf("Sum = %d", result);

}
