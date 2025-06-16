/* wap to print this pattern:-
       1
      121
     12321
    1234321

    */
#include<stdio.h>
#include<conio.h>
int main() {
    int i,n,j,k,l;
    printf("enter your number:- ");
    scanf("%d",&n);

    for(i=1; i<=n; i++) {
        int a =i-1;
        for(j=1; j<=n-i; j++) {
            printf("  ");
        }
        for(k=1; k<=i; k++) {
            printf("%d ",k);
        }
        for(l=1; l<=i-1; l++) {
            printf("%d ",a);
            a--;
        }
        printf("\n");
    }

    return 0;
}