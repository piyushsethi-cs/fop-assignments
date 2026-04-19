#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *s, *d;
    char ch;

    // Open source file in read mode
    s = fopen("a.txt", "r");

    d = fopen("b1.txt", "w");
    while((ch=fgetc(s))!=EOF){
        fputc(ch,d);
    }


    return 0;
}