#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char word[100], target[100];
    int count = 0;

    printf("Enter word to search: ");
    scanf("%s", target);

    fp = fopen("file.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    while (fscanf(fp, "%s", word) != EOF) {
        if (strcmp(word, target) == 0)
            count++;
    }

    printf("Occurrences: %d", count);

    fclose(fp);
}