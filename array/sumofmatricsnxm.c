#include<stdio.h>
#include<conio.h>
int main(){
    int r,c,i,j;
    printf("enter your row number: ");
    scanf("%d",&r);
    printf("enter your column number: ");
    scanf("%d",&c);
    int arr[r][c];
    int sum = 0;

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter your arr[%d][%d] element : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        sum = sum + arr[i][j];
        }
        printf("\n");
    }
    printf("your matrics sum is : %d",sum);

    return 0;
}