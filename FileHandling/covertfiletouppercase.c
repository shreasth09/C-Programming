#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp, *temp;
    char ch;

    fp = fopen("file.txt", "r");
    temp = fopen("upper.txt", "w");

    if (fp == NULL || temp == NULL) {
        printf("Error opening file");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        fputc(toupper(ch), temp);
    }

    printf("Converted to uppercase");

    fclose(fp);
    fclose(temp);
}