#include <stdio.h>

int main() {
    FILE *src, *dest;
    char ch;

    src = fopen("source.txt", "r");
    dest = fopen("dest.txt", "w");

    if (src == NULL || dest == NULL) {
        printf("Error opening file");
        return 0;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully");

    fclose(src);
    fclose(dest);
}