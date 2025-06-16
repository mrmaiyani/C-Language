/* wap to print this pattern:
1
0 1
1 0 1
0 1 0 1
*/
#include<stdio.h>
#include<conio.h>
int main() {
    int i,j,n;
    printf("enter your number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++) {
            if((i+j)%2==0)
                printf("1 ");
            else printf("0 ");
        }
        printf("\n");

    }

    return 0;
}