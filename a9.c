#include <stdio.h>
#include <math.h>

int main() {
    int n,i=0,d,sum=0,l;
    
    scanf("%d",&n);
    l=n;
    while(n!=0){
        d=n%10;
        sum=sum+pow(d,3);
        n=n/10;}
    if(sum==l){
        printf("armstrong");
    }
    else{
    printf("not armstrong");}


  
    return 0;
}