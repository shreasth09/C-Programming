#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp, *out;
    char line[200];

    fp = fopen("log.txt", "r");
    out = fopen("errors.txt", "w");

    if (fp == NULL || out == NULL) {
        printf("Error opening file");
        return 0;
    }

    while (fgets(line, sizeof(line), fp)) {
        if (strstr(line, "ERROR") != NULL) {
            fputs(line, out);
        }
    }

    printf("Error logs extracted");

    fclose(fp);
    fclose(out);
}