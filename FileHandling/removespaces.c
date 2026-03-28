#include <stdio.h>

int main() {
    FILE *fp, *temp;
    char ch;

    fp = fopen("file.txt", "r");
    temp = fopen("nospace.txt", "w");

    if (fp == NULL || temp == NULL) {
        printf("Error opening file");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch != ' ')
            fputc(ch, temp);
    }

    printf("Spaces removed");

    fclose(fp);
    fclose(temp);
}