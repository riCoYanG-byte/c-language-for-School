
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int a[4][3] = {{90, 127, 86}, {94, 120, 90}, {120, 125, 95}, {117, 130, 80}};
    int b[3] = {2200, 1900, 1300};
    int c[4];
    int i, j, k;
    for(i = 0; i < 4; i++) {
        c[i] = 0;
        for(j = 0; j < 3; j++) {
            c[i] += a[i][j] * b[j];
        }
    }
    printf("The sales of the supermarket: \n");
    for(i = 0; i < 4; i++) {
        printf("Season %d: %d\n", i+1, c[i]);
    }
    test();
    return 0;
}