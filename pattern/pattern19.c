/*wap to print the pattern of diamond */
#include<stdio.h>
#include<conio.h>
int main() {
    int n,i,j,k;
    printf("enter your number:- ");
    scanf("%d",&n);
    int space=n/2;
    int star=1;
    int midline=(n/2) +1;
    

    for(i=1; i<=n; i++) {
        for(j=1; j<=space; j++) {
            printf("  ");
        }
        for(k=1; k<=star; k++) {
            printf("* ");
        }
        if(i<midline) {
            space--;
            star+=2;
        }
        else {
            space++;
            star-=2;
        }

        printf("\n");

    }


    return 0;
}
