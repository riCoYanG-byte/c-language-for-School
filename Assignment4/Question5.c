#include<stdio.h>

int date(int n,int *monthaddr,int *dayaddr,int *yearaddr)
{
    *yearaddr=n/10000;
    *monthaddr=n/100-*yearaddr*100;
    *dayaddr=n-*yearaddr*10000-*monthaddr*100;
}

int main()
{

    int n,month,day,year;

    printf("enter a date like 20070421：\n");
    scanf("%d",&n);

    date(n,&month,&day,&year);
    printf("year is %d\nmonth is %d\nday is %d\n",year,month,day);

    return 0;
}


