#include <stdio.h>
int main() {
	float num, max = 0;
	int i, ok;
	printf("Please input ten numbers: \n");
	for(i = 0; i < 10; i++) {
flag:	ok = scanf("%f", &num);
		if(ok == 0 || (num - (int)(num)) != 0) {
			printf("Your input is wrong. Please retry.\n");
			fflush(stdin);
			goto flag;
		}
		if(num > max)
			max = num;
	}
	printf("The maximum number is %.0f.", max);
	return 0;
}