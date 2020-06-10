

#define MAXN 10
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "judge.h"

void swap(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}
void bubbleSort(int target[], int flag, int n) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if(flag == 1) {
                if(target[i] > target[j]) {
                    swap(&target[i], &target[j]);
                }
            }
            else {
                if(target[i] < target[j]) {
                    swap(&target[i], &target[j]);
                }
            }
        }
    }
}
void selectionSort(int target[], int flag, int n) {
    int i, j, extre;
    for(i = 0; i < n; i++) {
        extre = target[i];
        for(j = i+1; j < n; j++) {
            if(flag == 1) {
                if(target[j] < extre) {
                    swap(&target[j], &extre);
                }
            }
            else {
                if(target[j] > extre) {
                    swap(&target[j], &extre);
                }
            }
        }
        target[i] = extre;
    }
}
int main() {
    int a[MAXN], b[MAXN];
    int n;
    int i, j, k;
    int flag;

    printf("Please input the number of the numbers: ");
    n = judgeIfANumber("int");
    printf("Please input the order, 1 for ascending, 2 for descending: ");
    flag = judgeIfANumber("int");

    printf("Please input the numbers: ");
    for(i = 0; i < n; i++) {
        a[i] = judgeIfANumber("int");
        b[i] = a[i];
    }

    bubbleSort(a, flag, n);
    printf("After bubble sort, the array seems like: \n");
    for(i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    selectionSort(b, flag, n);
    printf("\nAfter selection sort, the array seems like: \n");
    for(i = 0; i < n; i++) {
        printf("%d\n", b[i]);
    }

    getchar();getchar();
    return 0;
}


