#include <stdio.h>

int main()
{
    int c;
    double a, b;

    printf("1 for add 2 for subtract  3 for multiply 4 for divide\n");
    scanf("%d", &c);
    scanf("%lf %lf", &a, &b);

    switch (c)
    {
        case 1:
            printf("Addition = %.0lf", a + b);
            break;
        case 2:
            printf("Subtraction = %.0lf", a - b);
            break;
        case 3:
            printf("Multiplication = %.0lf", a * b);
            break;
        case 4:
            if (b == 0)
                printf("Error");
            else
                printf("Division = %.2lf", a / b);
            break;
        default:
            printf("Invalid");
    }

    return 0;
}