/* wap to print this rectangle  pattern:
******
*    *
*    *
******
*/
#include<stdio.h>
#include<conio.h>
int main() {
    int i,j,r,c;
    printf("enter your number of row : ");
    scanf("%d",&r);
    printf("enter your number of column : ");
    scanf("%d",&c);

    for(i=1; i<=r; i++) {
        for(j=1; j<=c; j++) {
            if(i==1 || j==1 || i==r || j==c)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");

    }

    return 0;
}