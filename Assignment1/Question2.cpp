#include <stdio.h>
#include <math.h>

int main()
{
    //initialize
    double time;
    int distance = 150;
    int avgSpeed = 65;

    //force the type changing from int to double
    time = (double)distance / avgSpeed;

    printf("The elapsed time will be %.2f hour.", time);

    return 0;
}