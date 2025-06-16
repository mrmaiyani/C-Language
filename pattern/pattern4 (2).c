/* print the given pattern (triangle pattern):like n=4;
    ****
    ***
    **
    *
    
#include<stdio.h>
#include<conio.h>
int main() {
    int i,j,n;
    printf("enter your number of row and column : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++) {
        for(j=n; j>=i; j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


// method : 2
#include<stdio.h>
#include<conio.h>
int main() {
    int i,j,n;
    printf("enter your number of row and column : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++) {
        for(j=1; j<=n+1-i; j++) { // detailed in dryrun
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
 */
 
 //method : 3
#include<stdio.h>
#include<conio.h>
int main() {
    int i,j,n;
    printf("enter your number of row and column : ");
    scanf("%d",&n);
    int a = n;

    for(i=1; i<=n; i++) {
        for(j=1; j<=a; j++) { // detailed in dryrun
            printf("* ");
        }
        a--;
        printf("\n");
    }
    return 0;
}