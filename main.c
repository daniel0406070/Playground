#include <stdio.h>

char *tok= " ,.?!";

int main(){
    char line[81];
    char *ptr;
    //gets(line);
    gets(line);
    ptr=line;
    while (*ptr){
        putchar(*ptr++);
    }
    printf("\n");
}