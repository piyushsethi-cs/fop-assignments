#include <stdio.h>
#include <stdlib.h>

int main() {
    int year;
    printf("enter a year");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("leap");

    }
    else if(year%4==0 && year%100!=0)
    {
        printf("leap");
    }
    else{
        printf("not leap");
    }
    return 0;
}
