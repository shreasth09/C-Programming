#include <stdio.h>

int main() {
    FILE *f1, *f2;
    char ch;

    f1 = fopen("file1.txt", "a"); // append mode
    f2 = fopen("file2.txt", "r");

    if (f1 == NULL || f2 == NULL) {
        printf("Error opening file");
        return 0;
    }

    while ((ch = fgetc(f2)) != EOF) {
        fputc(ch, f1);
    }

    printf("Content appended successfully");

    fclose(f1);
    fclose(f2);
}