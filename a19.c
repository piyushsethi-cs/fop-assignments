#include <stdio.h>
#include <string.h>
struct employee
{
    char name[100],gender[41],designation[100],doj[100];
    int salary;
};
int main(){
    int a,i;
    int f=0,m=0;
    printf("enter total number of employees");
    scanf("%d",&a);
    struct employee s[a];
    for(i=0;i<a;i++){
        printf("enter name gender designation doj salary");
        scanf("%s%s%s%s%d",s[i].name,s[i].gender,s[i].designation,s[i].doj,&s[i].salary);

    } 
    printf("total number of employees is %d",a);
    for(i=0;i<a;i++){
    if (strcmp(s[i].gender, "female") == 0) {
    f++;
} else if (strcmp(s[i].gender, "male") == 0) {
    m++;
}
    }
    printf("\nmale %d female%d",m,f);



    for(i=0;i<a;i++){
        if (s[i].salary>10000){
            printf("salary more than 10000%s",s[i].name);
        }
         if ((strcmp(s[i].designation,"asstmanager"))==0){
         printf("asstmanager is%s",s[i].name);
        }
    }
    
}