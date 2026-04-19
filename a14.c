#include <stdio.h>
#include <math.h>

int main() {
    int n,i=0,a,b=1;
    scanf("%d",&n);
    while(n!=0){
        a=n%10;
        i=i+a*b;
        b=b*2;
        n=n/10;

    }
printf("%d",i);
return 0;
}