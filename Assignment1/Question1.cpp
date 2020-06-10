#include <stdio.h>
#include <math.h>

int main() {
    //initialize the variable
    long long int speed;
    long long int time;
    long long int distance;

    time = 60 * 60 * 24 * 365; speed = 3 * (int)pow(10, 8);

    distance = time * speed;

    //output the result
    printf("The distance of a light year is %lld meters.",distance);

    return 0;
}