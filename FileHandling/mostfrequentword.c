#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char words[100][50];
    int count[100] = {0};
    int n = 0;

    fp = fopen("file.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    while (fscanf(fp, "%s", words[n]) != EOF) {
        int found = -1;

        for (int i = 0; i < n; i++) {
            if (strcmp(words[i], words[n]) == 0) {
                found = i;
                break;
            }
        }

        if (found != -1) {
            count[found]++;
        } else {
            count[n] = 1;
            n++;
        }
    }

    int max = 0, index = 0;

    for (int i = 0; i < n; i++) {
        if (count[i] > max) {
            max = count[i];
            index = i;
        }
    }

    printf("Most frequent word: %s (%d times)", words[index], max);

    fclose(fp);
}