#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int digits = 0, alphabets = 0, special = 0;

    fp = fopen("file.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isdigit(ch))
            digits++;
        else if (isalpha(ch))
            alphabets++;
        else
            special++;
    }

    printf("Digits: %d\nAlphabets: %d\nSpecial: %d", digits, alphabets, special);

    fclose(fp);
}