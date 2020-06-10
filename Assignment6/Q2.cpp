#define MAXN 10000
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int cmp (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int getChoice() {
    fflush(stdin);
    char choice;
    while(1) {
        scanf("%c", &choice);
        if(choice == 'y' || choice == 'Y') {
            return 1;
        }
        if(choice == 'n' || choice == 'N') {
            return 0;
        }
        printf("Your input is wrong. Please try again. ");
    }
    
}

/* Maybe you will think I put huge amount of lines of code into one function is so stupid, 
 * however the description of this problem asks us to do so. Have no choice. */ 

void setHolidays() {
    
    char fileName[MAXN], content[MAXN];
    FILE * fp;
    int continueFlag = 1;
    int choice;
    int date[MAXN];
    int totalNumber = 0;
    int i, j, k;
    int newHoliday = 0, modifiedDate = 0, modifyDateExistenceFlag = 1, deleteDateExistenceFlag = 0;
    int deleteDate;

    while(1) {
        fflush(stdin);
        printf("Please input the name of the file containing holidays: ");
        scanf("%s", fileName);
        fp = fopen(fileName, "r");
        if(fp == NULL) {
            printf("The file doesn't exist. Create? (Y for your input name, N for default name)");
            choice = getChoice();
            if(choice == 1) {
                fp = fopen(fileName, "w+");
                printf("File %s has been created.\n", fileName);
                break;
            }
            else if (choice == 0){
                fp = fopen("Holiday.txt", "r");
                if(fp == NULL) {
                    printf("File Holiday.txt has been created.\n");
                    fp = fopen("Holiday.txt", "w+");
                }
                else {
                    printf("Holiday.txt already exists.\n");
                    fp = fopen("Holiday.txt", "a+");
                    goto readContent;
                }
                
                break;
            }
        }
        else {
readContent:    for(i = 0; fgets(content, MAXN, fp) != NULL; i++) {
                date[i] = atoi(content);
                if(date[i] != 0){
                    totalNumber++;
                }
                else 
                    i = -1; // Next for loop will let i = 0;
            }
            break;
        }
    }

    while(1) {
        printf("\n----------Welcome----------\n");
        printf("|   1. Display Holiday    |\n");
        printf("|   2. Add new holiday    |\n");
        printf("|   3. Modify holiday     |\n");
        printf("|   4. Delete holiday     |\n");
        printf("|   5. Save & exit        |\n");
        printf("---------------------------\n");
        printf("Please input your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            if(totalNumber == 0) {
                printf("Holiday list empty.\n");
            }
            else {
                qsort(date, totalNumber, sizeof(int), cmp);
                for(i = 0; i < totalNumber; i++) {
                    printf("%d\n", date[i]);
                }
            }
            break;
        case 2:
            do {
newDate:        printf("Please input a new holiday, format like YYYYMMDD: ");
                scanf("%d", &newHoliday);
                for(i = 0; i < totalNumber; i++) {
                    if(date[i] == newHoliday) {
                        printf("This holiday exists. Please try again.\n");
                        goto newDate;
                    }
                }
                date[totalNumber++] = newHoliday;
                printf("Do you want to add a new one? (Y/N)");
                continueFlag = getChoice();
            }while(continueFlag);
            break;
        case 3:
            do {
modifyDate:     printf("Please input the holiday you want to modify, format like YYYYMMDD: ");
                scanf("%d", &newHoliday);
                for(i = 0; i < totalNumber; i++) {
                    if(date[i] == newHoliday) {
checkModifyDate:        printf("What should it be? Please input: ");
                        scanf("%d", &modifiedDate);
                        for(j = 0; j < totalNumber; j++) {
                            if(date[j] == modifiedDate) {
                                printf("The modified date exists. Please try again.\n");
                                goto checkModifyDate;
                            }
                        }
                        date[i] = modifiedDate;
                        break;
                    }
                }
                if(i == totalNumber) {
                    printf("The date you input doesn't exist. Please try again.\n");
                    goto modifyDate;
                }
                printf("Do you want to modify another one? (Y/N)");
                continueFlag = getChoice();

            }while(continueFlag);
            break;
        case 4:
            do{
deleteDate:     printf("Please input the holiday you want to delete, format like YYYYMMDD: ");
                scanf("%d", &deleteDate);
                for(i = 0; i < totalNumber; i++) {
                    if(date[i] == deleteDate) {
                        date[i] = INT_MAX;
                        totalNumber--;
                        deleteDateExistenceFlag = 1;
                        break;
                    }
                }
                if(!deleteDateExistenceFlag) {
                    printf("Not found your input date. Please try again.\n");
                    goto deleteDate;
                }
                printf("Do you want to delete another one? (Y/N)");
                continueFlag = getChoice();
            }while(continueFlag);
            break;
        case 5:
            for(i = 0; i < totalNumber; i++) {
                fprintf(fp, "%d\n", date[i]);
            }
            fclose(fp);
            printf("Thanks for use this program. Have a nice day.");
            return;
            break;
        default:
            printf("You haven't input anything. Try again.\n");
            break;
        }
    }
}

int main() {
    setHolidays();
    getchar();getchar();
    return 0;
}