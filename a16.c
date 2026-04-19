#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter integers: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Even numbers are: ");
    for(i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            printf("%d ", a[i]);
        }
    }

    printf("\nOdd numbers are: ");
    for(i = 0; i < n; i++) {
        if(a[i] % 2 != 0) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}