#include <stdio.h>
int main() {
	float start, num, increment;
	int i, j, k;
  
	printf("Please input the starting Celsius value: ");
	scanf("%f", &start);
	printf("Please input the number of conversions to be made: ");
	scanf("%f", &num);
	printf("Please input the increment between Celsius values: ");
	scanf("%f", &increment);
	printf("The list of Celsius values is: \nCelsius\tFahrenheit\n");
  
	for(i = 0; i < num; i++) {
		printf("%.2f\t%.2f\n", start, (9.0 / 5.0) * start + 32.0);
		start += increment;
	}
	return 0;
}