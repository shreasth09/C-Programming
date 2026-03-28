#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp, *temp;
    char lines[100][100];
    int count = 0, duplicate;

    fp = fopen("file.txt", "r");
    temp = fopen("unique.txt", "w");

    if (fp == NULL || temp == NULL) {
        printf("Error opening file");
        return 0;
    }

    while (fgets(lines[count], 100, fp)) {
        duplicate = 0;

        for (int i = 0; i < count; i++) {
            if (strcmp(lines[i], lines[count]) == 0) {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate) {
            fputs(lines[count], temp);
            count++;
        }
    }

    printf("Duplicate lines removed");

    fclose(fp);
    fclose(temp);
}