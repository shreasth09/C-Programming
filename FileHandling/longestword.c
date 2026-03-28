#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char word[100], longest[100];
    int max = 0;

    fp = fopen("file.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    while (fscanf(fp, "%s", word) != EOF) {
        int len = strlen(word);
        if (len > max) {
            max = len;
            strcpy(longest, word);
        }
    }

    printf("Longest word: %s", longest);

    fclose(fp);
}