#include <stdio.h>

void main() 

{
    
	// write a program to find the third angle of a right triangle when two other angles are given.
	
	
	float angle1, angle2, angle3;

    printf("Enter first angle: "); // for the first angle of triangle
    scanf("%f",&angle1);

    printf("Enter second angle: "); // for the second angle of triangle
    scanf("%f",&angle2);

    angle3 = 180 - (angle1 + angle2); // for sum of third angle of triangle

    printf("Third angle of the triangle = %.1f\n", angle3);

}

