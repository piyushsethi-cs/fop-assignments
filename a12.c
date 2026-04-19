#include <stdio.h>
#include <math.h>

int main() {
    int n,i,a,b;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%i==0){
        printf("lcd is %d",i);
        break;}
}
    for(i=n;i>=1;i--){
        if(n%i==0){
        printf("gcd is %d",i);
        break;}

    }
return 0;
}