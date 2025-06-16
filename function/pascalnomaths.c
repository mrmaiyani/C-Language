#include <stdio.h>
#include<conio.h>

void triangle(int r) {
    for(int i=0;i<=r;i++){
        int first = 1;

        for(int j=0;j<=r-i;j++){
            printf(" ");
        }

        for(int j=0;j<=i;j++){
            printf("%d ",first);
            first = first * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

int main() {
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    triangle(r);
    return 0;
}