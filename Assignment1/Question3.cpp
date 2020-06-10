#include <stdio.h>
#include <math.h>

int main()
{
    //initialize the variable
    double radius;
    double circumference;

    const double pi = 3.1415926;
    printf("Enter the radius of a circle:");

    //input
    scanf("%lf",&radius);
    circumference = 2 * pi * radius;

    printf("The circumference of the circle is %.2f",circumference);
    return 0;
}