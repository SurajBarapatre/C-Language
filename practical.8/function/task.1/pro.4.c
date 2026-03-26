#include<stdio.h>

// print to area of circle by using function

float findArea(float r)                         // for finding area of circle 
{
    float area;
    area = 3.14 * r * r;                        // for using formula to find area of circle
    return area;                               //  for return the calculated area 
}

void main()                                    // for user input radius
{
    float radius, area_of_circle;

    printf("Enter radius of circle: ");        // for printing radius
    scanf("%f", &radius);

    area_of_circle = findArea(radius);           // for funtion when we call it

    printf("Area of Circle = %.2f",area_of_circle);     // for display area of circle

}
