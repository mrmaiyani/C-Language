#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,j;
    printf("Enter your number of row and column : ");
    scanf("%d",&n);
    int arr[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter your arr[%d][%d] element : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<n;j++){
        for(i=n-1;i>=0;i--){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}