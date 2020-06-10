#include <stdio.h>
#include <math.h>
void calculateDistance() {
    double ax, ay, bx, by;
    printf("Please input the coordinate of the first point: ");
    scanf("%lf%lf", &ax, &ay);
    printf("Please input the coordinate of the second point: ");
    scanf("%lf%lf", &bx, &by);
    printf("The distance between two points is %.2f", sqrt(pow(ax-bx, 2)+pow(ay-by, 2)));
}

int main() {
    calculateDistance();
    return 0;
}