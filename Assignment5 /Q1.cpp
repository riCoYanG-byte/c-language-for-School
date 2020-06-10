#define MAXN 10
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "judge.h"

int main() {
    double price[MAXN], amount[MAXN], quantity[MAXN];
    char s[MAXN];
    int n;
    int i;
    
    printf("Please input the number of items.");
    n = judgeIfANumber("int");
    for(i = 0; i < n; i++) {
        printf("Please input the price of no.%d item.", i+1);
        price[i] = judgeIfANumber("float");
        printf("Please input the quantity of no.%d item.", i+1);
        quantity[i] = judgeIfANumber("float");
        amount[i] = price[i] * quantity[i];
    }
    printf("\nQuantity\tPrice\tAmount\n--------\t-----\t------\n");
    for(i = 0; i < n; i++)
        printf("%8.2f\t%5.2f\t%6.2f\t\n", quantity[i], price[i], amount[i]);
    return 0;
}

