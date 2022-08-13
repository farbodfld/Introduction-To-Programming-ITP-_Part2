#include <stdio.h>

int main() {
    int n,d;
    scanf("%d %d",&n,&d);
    char Saturday;
    char  Sunday;
    char  Monday;
    char  Tuesday;
    char  Wednesday;
    char  Thursday;
    char  Friday;

    if((d+n)%7 == 1)
        printf("Saturday");
    if((d + n)%7 == 2)
        printf("Sunday");
    if((d + n)%7 == 3)
        printf("Monday");
    if((d + n)%7 == 4)
        printf("Tuesday");
    if((d+ n)%7 == 5)
        printf("Wednesday");
    if((d + n)%7 == 6)
        printf("Thursday");
    if((d +n)%7 == 0)
        printf("Friday");
    return 0;
}