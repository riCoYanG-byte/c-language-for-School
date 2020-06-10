#include <stdio.h>
#include <math.h>

int main() {

	int year;

	//input
	printf("Please input the depositing time: ");
	scanf("%d", &year);

	//output
	if(year < 1)
		printf("The interest rate is 0.02");
	else if(year < 2)
		printf("The interest rate is 0.025");
	else if(year < 3)
		printf("The interest rate is 0.03");
	else if(year < 4)
		printf("The interest rate is 0.035");
	else if(year < 5)
		printf("The interest rate is 0.04");
	else
		printf("The interest rate is 0.045");
	return 0;
}
