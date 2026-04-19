#include <stdio.h>

int main()
{
    float b,h,t,g,p,n;

    scanf("%f",&b);

    h=b*0.10;
    t=b*0.05;
    g=b+h+t;
    p=g*0.02;
    n=g-p;

    printf("Gross Salary = %.2f\n",g);
    printf("Net Salary = %.2f",n);

    return 0;
}