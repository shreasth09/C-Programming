#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("file.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    printf("Numbers in file: ");

    while ((ch = fgetc(fp)) != EOF) {
        if (isdigit(ch)) {
            printf("%c ", ch);
        }
    }

    fclose(fp);
}