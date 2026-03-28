#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

void add() {
    FILE *fp = fopen("students.txt", "a");
    struct Student s;

    printf("Enter ID Name Marks: ");
    scanf("%d %s %f", &s.id, s.name, &s.marks);

    fprintf(fp, "%d %s %.2f\n", s.id, s.name, s.marks);
    fclose(fp);
}

void view() {
    FILE *fp = fopen("students.txt", "r");
    struct Student s;

    while (fscanf(fp, "%d %s %f", &s.id, s.name, &s.marks) != EOF) {
        printf("%d %s %.2f\n", s.id, s.name, s.marks);
    }

    fclose(fp);
}

void search() {
    FILE *fp = fopen("students.txt", "r");
    struct Student s;
    int id, found = 0;

    printf("Enter ID: ");
    scanf("%d", &id);

    while (fscanf(fp, "%d %s %f", &s.id, s.name, &s.marks) != EOF) {
        if (s.id == id) {
            printf("%d %s %.2f\n", s.id, s.name, s.marks);
            found = 1;
        }
    }

    if (!found) printf("Not found");
    fclose(fp);
}

int main() {
    int ch;
    while (1) {
        printf("\n1.Add 2.View 3.Search 4.Exit\n");
        scanf("%d", &ch);

        if (ch == 1) add();
        else if (ch == 2) view();
        else if (ch == 3) search();
        else break;
    }
}