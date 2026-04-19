#include <stdio.h>
int s(int a,int b);
int ps(int *a,int *b);

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    s(a,b);
    ps(&a,&b);

    return 0;
}
int s(int a,int b){
    int t;
    t=a;
    a=b;
    b=t;
    printf("num1 is %d num2 is %d",a,b);
}
int ps(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
    printf("num1 is %d num2 is %d",*a,*b);

}