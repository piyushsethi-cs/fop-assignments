#include <stdio.h>
#include <stdlib.h>

int f(int a);
int rf(int a);

int main() {
    int n;
    scanf("%d", &n);
    
    f(n);
    
    int result = rf(n);
    printf(" recursion fact=%d", result);

    return 0;
}

int f(int n) {
    int i, fact = 1;
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    printf("without recursion fact=%d", fact);
    return fact;
}

int rf(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * rf(n - 1);
    }
}