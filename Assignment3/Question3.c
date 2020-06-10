#include <stdio.h>
int judgeIfTheLeapYear(int year) {
	if(!(year % 400))
		return 1;
	else if(year % 100 && !(year % 400))
		return 0;
	else if(!(year % 4))
		return 1;
	else
		return 0;
}

int main() {
	int year, month, day;
	int tot = 0;
	int i, j, k;
	int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int ok;
	
	printf("Please input the date. The format is like 2020-01-01.\n");
	while(1) {
		ok = scanf("%d-%d-%d", &year, &month, &day);
		if(ok == 3)
		{
			if(judgeIfTheLeapYear(year))
				days[2] = 29;
			else
				days[2] = 28;
				
			if(month > 12 || month < 1 || day > days[month] || day < 1) {
				printf("Your input is wrong. Please retry.\n");
				fflush(stdin);
			}
			else
				break;
		}
		else {
			printf("Your input is wrong. Please retry.\n");
			fflush(stdin);
		}
	}
	
		
	for(i = 1; i < month; i++) {
		tot += days[i];
	}
	tot += day;
	printf("The number of day of the date in this year is: %d", tot);
	
	return 0;
}

