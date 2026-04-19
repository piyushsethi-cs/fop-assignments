#include <stdio.h>

int main() {
    int choice;
    double a, b, result;
    int i, n;
    long long fact = 1;

    printf("Simple Calculator\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Power (x^y)\n6. Factorial (x!)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            scanf("%lf %lf", &a, &b);
            result = a + b;
            printf("Result = %.2lf", result);
            break;

        case 2:
            scanf("%lf %lf", &a, &b);
            result = a - b;
            printf("Result = %.2lf", result);
            break;

        case 3:
            scanf("%lf %lf", &a, &b);
            result = a * b;
            printf("Result = %.2lf", result);
            break;

        case 4:
            scanf("%lf %lf", &a, &b);
            if(b != 0)
                printf("Result = %.2lf", a / b);
            else
                printf("Error: Division by zero");
            break;

        case 5:
            scanf("%lf %lf", &a, &b);
            result = 1;
            for(i = 1; i <= (int)b; i++) {
                result *= a;
            }
            printf("Result = %.2lf", result);
            break;

        case 6:
            scanf("%d", &n);
            if(n < 0) {
                printf("Factorial not defined");
            } else {
                for(i = 1; i <= n; i++) {
                    fact *= i;
                }
                printf("Result = %lld", fact);
            }
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}