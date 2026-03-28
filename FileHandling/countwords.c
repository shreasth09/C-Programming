#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int words = 0, inWord = 0;

    fp = fopen("file.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isspace(ch)) {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    printf("Total words: %d", words);

    fclose(fp);
}