#include <stdio.h>

int main() {
    FILE *fp;
    char arr[1000];
    int i = 0;

    fp = fopen("file.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    while ((arr[i] = fgetc(fp)) != EOF) {
        i++;
    }

    // Bubble sort
    for (int j = 0; j < i-1; j++) {
        for (int k = 0; k < i-j-1; k++) {
            if (arr[k] > arr[k+1]) {
                char temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }

    printf("Sorted content:\n");
    for (int j = 0; j < i; j++)
        printf("%c", arr[j]);

    fclose(fp);
}