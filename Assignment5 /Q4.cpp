
#define MAXN 10
#define COURSEN 4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "judge.h"

int main() {
    float grade[MAXN][COURSEN+1];
    float course[COURSEN];
    char *numbers[] = {"first", "second", "third", "fourth"};

    int i, j, k;
    for(i = 0; i < COURSEN; i++)
        course[i] = 0;
    
    for(i = 0; i < MAXN; i++){
        printf("Please input no.%d student's grades.\n", i+1);
        grade[i][COURSEN] = 0;
        for(j = 0; j < COURSEN; j++) {
            printf("Please input the grade of %s class.", numbers[j]);
            grade[i][j] = judgeIfANumber("float");
            grade[i][COURSEN] += grade[i][j];
            course[j] += grade[i][j];
        }
        grade[i][COURSEN] /= COURSEN;
    }
    printf("\nCourse 1\tCourse 2\tCourse 3\tCourse 4\tAverage\n");
    printf("--------\t--------\t--------\t--------\t-------\n");
    for(i = 0; i < MAXN; i++){
        for(j = 0; j < COURSEN; j++) {
            printf("%8.2f\t", grade[i][j]);
        }
        printf("%8.2f\n", grade[MAXN][COURSEN]);
    }
    for(i = 0; i < COURSEN; i++){
        printf("%8.2f\t", course[i]/COURSEN);
    }
    getchar();getchar();
    return 0;
}