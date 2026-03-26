#include<stdio.h>

// print to area of circle by using function

float findArea(float r)
{
    float area;
    area = 3.14 * r * r;
    return area;
}

void main()
{
    float radius, area_of_circle;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area_of_circle = findArea(radius);

    printf("Area of Circle = %.2f",area_of_circle);

}
