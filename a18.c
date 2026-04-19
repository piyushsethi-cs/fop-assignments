#include<stdio.h>
#include<string.h>
int main() {

char a[100],b[100],c[100];
int i,len,flag=0;
printf("enter a string:");

scanf("%s",a);
scanf("%s",b);
len=strlen(a);
printf("%d",len);
for(i=0;i<len;i++){
c[i]=a[len-i-1];}

printf("reversed string=%s\n",c);
if (strcmp(a,c)==0)
printf("the string is palindrome\n");
else
printf("not palindrome\n");

if (strcmp(a,b)==0)
printf("the strings are equal\n");
else
printf("not equal\n");
if (strstr(a,b)!=NULL)
printf("Substring FOUND\n");
else
printf("not found substring\n");



return 0;
}

