#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,n;
    printf("Enter your number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
        if(j==3 || i==3)
        printf("* ");
        else
        printf("  ");
        }
    printf("\n");
    }

    return 0;
}