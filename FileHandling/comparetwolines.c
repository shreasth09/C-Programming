#include <stdio.h>

int main() {
    FILE *f1, *f2;
    char ch1, ch2;
    int flag = 1;

    f1 = fopen("file1.txt", "r");
    f2 = fopen("file2.txt", "r");

    if (f1 == NULL || f2 == NULL) {
        printf("Error opening file");
        return 0;
    }

    while ((ch1 = fgetc(f1)) != EOF && (ch2 = fgetc(f2)) != EOF) {
        if (ch1 != ch2) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Files are identical");
    else
        printf("Files are different");

    fclose(f1);
    fclose(f2);
}