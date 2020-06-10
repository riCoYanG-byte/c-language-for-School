#include <stdio.h>

int main() {

	int year;

	//input
	printf("Please input the year: ");
	scanf("%d", &year);

	//output
	if(!(year % 400))
		printf("%d is leap year.", year);
	else if(year % 100 && !(year % 400))
		printf("%d is not leap year.", year);
	else if(!(year % 4))
		printf("%d is leap year.", year);
	else
		printf("%d is not leap year.", year);
	return 0;
}
