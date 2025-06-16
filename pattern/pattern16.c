/* wap to print this pattern:-
       *
      ***
     *****
    *******
    */
#include<stdio.h>
#include<conio.h>
int main() {
    int i,n,j,k,l;
    printf("enter your number:- ");
    scanf("%d",&n);

    for(i=1; i<=n; i++) {
        for(j=1; j<=n-i; j++) {
            printf("  ");
        }
        for(k=1; k<=i; k++) {
            printf("* ");
        }
        for(l=1;l<=i-1;l++){
        printf("* ");
        }
        
        
        printf("\n");
    }

    return 0;
}