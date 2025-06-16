/* print the given pattern:
    1234
    1234
    1234
    1234
*/
#include<stdio.h>
#include<conio.h>
int main() {
    int i,j,r,c;
    printf("enter your no. of rows : ");
    scanf("%d",&r);
    printf("enter your no. of star in each column : ");
    scanf("%d",&c);

    for(i=1; i<=r; i++) {
        for(j=1; j<=c; j++) {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

