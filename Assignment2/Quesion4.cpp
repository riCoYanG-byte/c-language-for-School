#include <stdio.h>

int main() {

    float a,b,c;
    printf("please enter the variables : ");
    scanf("%f %f",&a,&b);

    char opt;

    getchar();
    printf("please enter the operator : ");
    opt = getchar();

    switch(opt){
        case '+':
            c=a+b;
            printf("%f",c);
        case '-':
            c=a-b;
            printf("%f",c);
        case '*':
            c=a*b;
            printf("%f",c);
        case '/':
            c=a/b;
            printf("%f",c);
    }
    return 0;
}