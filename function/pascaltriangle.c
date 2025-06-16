#include <stdio.h>
#include<conio.h>

int factorial(int x) {
    int fact = 1;
    for (int i=1;i<=x;i++) {
        fact = fact*i;
    }
    return fact;
}

void space(int r) {
    for (int i = 0;i <= r;i++) {
        for (int j = 0;j <= r - i;j++) {
            printf(" ");
        }

        for (int j = 0;j <= i;j++) {
            printf("%d ", factorial(i) / (factorial(j) * factorial(i - j)));
        }
        printf("\n");
    }
}

int main() {
    int r;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    space(r);

    return 0;
}