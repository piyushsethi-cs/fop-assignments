#include <stdio.h>

int main()
{
    int n,i=0,c;
    printf("enter a number");
    scanf("%d",&n);
    do{
        
        c=i*n;
        printf("%d * %d=%d\n",n,i,c);
        i++;
    }while(i<=10);
    return 0;
}