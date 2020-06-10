#include <stdio.h>

int main() {
	int grade;

	//input
    printf("Please input the grade: ");
	scanf("%d", &grade);

	//output
	if(grade >= 70)
		printf("A passing grade");
	else
		printf("A failing grade");
	return 0;
}
