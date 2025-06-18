#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,r,c;
    printf("Enter your size of row: ");
    scanf("%d",&r);
    printf("Enter your size of column: ");
    scanf("%d",&c);
    int arr[r][c];

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter your arr[%d][%d] element: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}