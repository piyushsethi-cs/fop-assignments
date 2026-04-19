#include <stdio.h>
#include <math.h>

int main() {
    int n,i,a,b;
    scanf("%d",&n);
    while(n!=0){
        a=n%10;
        printf("%d",a);
        n=n/10;
    }
return 0;
}