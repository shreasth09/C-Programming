#include <stdio.h>

struct Account {
    int accNo;
    float balance;
};

void create() {
    FILE *fp = fopen("bank.txt", "a");
    struct Account a;

    printf("Enter Account No: ");
    scanf("%d", &a.accNo);
    a.balance = 0;

    fprintf(fp, "%d %.2f\n", a.accNo, a.balance);
    fclose(fp);
}

void view() {
    FILE *fp = fopen("bank.txt", "r");
    struct Account a;

    while (fscanf(fp, "%d %f", &a.accNo, &a.balance) != EOF) {
        printf("Acc: %d Balance: %.2f\n", a.accNo, a.balance);
    }

    fclose(fp);
}

int main() {
    int ch;
    while (1) {
        printf("\n1.Create 2.View 3.Exit\n");
        scanf("%d", &ch);

        if (ch == 1) create();
        else if (ch == 2) view();
        else break;
    }
}