/*wap to print the pattern */
#include<stdio.h>
#include<conio.h>
int main() {
    int n,i,j,k;
    printf("enter your number:- ");
    scanf("%d",&n);
    int space=1;
    int star=n;
    int l;
    
    for(int m=1;m<=2*n+1;m++){
    printf("* ");
    }
    printf("\n");
    

    for(i=1; i<=n; i++) {
        for(j=1; j<=star; j++) {
            printf("* ");
        }
        for(k=1; k<=space; k++) {
            printf("  ");
        }    
        for(l=1; l<=star; l++) {
            printf("* ");    
        }
            star--;
            space+=2;
            printf("\n");

    }


    return 0;
}
