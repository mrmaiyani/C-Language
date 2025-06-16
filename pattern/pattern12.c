/* wap to print this pattern:
1
3 5
7 9 11
13 15 17 19
*/
#include<stdio.h>
#include<conio.h>
int main() {
    int i,j,n;
    int a=1;
    printf("enter your number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++){
        printf("%d ",a++);
        a++;
        }
        printf("\n");

    }

    return 0;
}