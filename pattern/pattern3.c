/* print the given pattern in square format:like n=4;
    1234
    1234
    1234
    1234
*/
#include<stdio.h>
#include<conio.h>
int main() {
    int i,j,n;
    printf("enter your number of row and column : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++) {
        for(j=1; j<=n; j++) {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

