#include <stdio.h>

int len(char *s){
    int i=0;
    while(*(s+i)!='\0') i++;
    return i;
}

int main(){
    char str[]="hello";
    printf("%d", len(str));
}