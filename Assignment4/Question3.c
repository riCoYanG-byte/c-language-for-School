#include <stdio.h>
#include <math.h>
#include <time.h>

int createRand() {
    srand(time(NULL));
    return rand()%100;
}
void guessNumber() {
    int i;
    int res = createRand();
    int now;
    for(i = 1; i <= 7; i++) {
        printf("Please input your guess: ");
        scanf("%d", &now);
        if(now > res && i != 7) {
            printf("Wrong number, try again. Your input is higher. %d chance(s) left.\n", 7-i);
        }
        else if(now > res && i == 7) {
            printf("Sorry, you lose. Your input is higher.\n");
        }
        else if(now < res && i != 7) {
            printf("Wrong number, try again. Your input is lower. %d chance(s) left.\n", 7-i);
        }
        else if(now < res && i == 7) {
            printf("Sorry, you lose. Your input is lower.\n");
        } else {
            printf("Hooray, you have won!\n");
            break;
        }
    }

}

int main() {
    char choice;
    int ok = 1;
    while(ok) {
        guessNumber();
        while(1) {
            fflush(stdin);
            printf("Would you like to play again (y/n)?");
            scanf("%c", &choice);
            if(choice == 'n' || choice == 'N') {
                ok = 0;
                printf("See you later!");
                break;
            }
            else if(choice != 'y' || choice == 'Y') {
                printf("Wrong input. Try again.\n");
            }
            else break;
        }
    }
    return 0;
}