#include<stdio.h>

int main() {
int n,i;
float x,sum=0,term;
printf("enter x and no of terms");
scanf("%f%d",&x,&n);
term=x;
for(i=1;i<=n;i++){
sum=sum+term;
term=term*-1*x*x/2*i*(2*i+1);}
printf("sinx=%f",sum);
return 0;
}

