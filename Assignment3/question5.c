#include<stdio.h>

int main(){

    int point;
    int sum = 0;
    float avg;

    for(int i=0;i<5;i++){
        for(int k=0;k<3;k++){
            printf("please enter the point of each Bowler :");
            scanf("%d",&point);
            sum = sum+point;
        }
        avg = sum/3;
        printf("%d st Bowler's average point is : %f \n",i+1,avg);
        sum = 0;
    }

    return 0;
}

