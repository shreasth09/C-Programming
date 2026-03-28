#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp, *temp;
    char word[100], replace[100], buffer[1000];

    printf("Enter word to replace: ");
    scanf("%s", word);

    printf("Enter new word: ");
    scanf("%s", replace);

    fp = fopen("file.txt", "r");
    temp = fopen("temp.txt", "w");

    if (fp == NULL || temp == NULL) {
        printf("Error opening file");
        return 0;
    }

    while (fgets(buffer, sizeof(buffer), fp)) {
        char *pos;
        while ((pos = strstr(buffer, word)) != NULL) {
            *pos = '\0';
            fprintf(temp, "%s%s", buffer, replace);
            strcpy(buffer, pos + strlen(word));
        }
        fprintf(temp, "%s", buffer);
    }

    fclose(fp);
    fclose(temp);

    remove("file.txt");
    rename("temp.txt", "file.txt");

    printf("Word replaced successfully");
}