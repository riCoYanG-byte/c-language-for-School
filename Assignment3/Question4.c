#include <stdio.h>
#define MAXN 100
void highAccuracyPlus(int a, int n) {
	int sum[100];
	int i, j, k;
	int up = 0;
	sum[1] = 0;
	for(i = 1; i <= n; i++) {
		sum[i+1] = 0;
		for(j = 1; j <= i; j++) {
			sum[j] += a;
			if(sum[j] >= 10) {
				sum[j] -= 10;
				sum[j+1]++;
			}	
		}
		
	}
	if(sum[n+1]) {
		printf("The sum is ");
		for(i = n+1; i >= 1; i--)
			printf("%d", sum[i]);
	} else {
		printf("The sum is ");
		for(i = n; i >= 1; i--)
			printf("%d", sum[i]);
	}
	
}

int main() {
	int a, n;
	int now = 0;
	int sum = 0;
	int i;
	printf("Please input a and n: ");
flag:	scanf("%d%d", &a, &n);
	if(a >= 10 || a <= 0) {
		printf("Wrong answer! Please retry.\n");
		goto flag;
	}
	if(n <= 9) {
		for(i = 1; i <= n; i++) {
			now = now * 10 + a;
			sum += now;
		}
		printf("The sum is %d", sum);
	} else {
		highAccuracyPlus(a, n);
	}
	return 0;
}