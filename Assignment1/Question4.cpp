#include <stdio.h>
#include <math.h>
int main()
{
    //initialize the variable
    double fahrenheit;
    double celsius;

    printf("Enter a temperature in degrees Fahrenheit: ");
    //input
    scanf("%lf", &fahrenheit);

    celsius = 5.0 / 9.0 * ( fahrenheit - 32.0 );
    printf("The degrees Celsius is %.1f celsius.", celsius);
    return 0;
}