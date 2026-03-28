#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char line[200];
    int error = 0, warning = 0;

    fp = fopen("log.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    while (fgets(line, sizeof(line), fp)) {
        if (strstr(line, "ERROR")) error++;
        if (strstr(line, "WARNING")) warning++;
    }

    printf("Errors: %d\nWarnings: %d", error, warning);

    fclose(fp);
}