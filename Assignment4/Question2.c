#include <stdio.h>
#include <math.h>
void winPercent() {
    int win, lose;
    while(1) {
        printf("Please input the number of winning: ");
        scanf("%d", &win);
        printf("Please input the number of losing: ");
        scanf("%d", &lose);
        if(win < 0 || lose < 0 || win+lose <= 0) {
            printf("Input wrong. Try again. \n");
        } else break;
    }
    printf("The winning percentage is %.2f.", 100.0*win/(win+lose));
}

int main() {
    winPercent();
    return 0;
}