#include <stdio.h>
#include <math.h>

int main() {

	int a, b, c;
	double area;
	double s;

	//input
	printf("Please input the length of the triangle‘s sides: ");
	scanf("%d %d %d", &a, &b, &c);

	s = double((a + b + c) / 2);
	area = sqrt(s*(s-a)*(s-b)*(s-c));

	//output
    if(a + b <= c || b + c <= a || a + c <= b)
        printf("Not a valid triangle.");
    else
		printf("The area of the triangle is %.2f.", area);
	return 0;
}
