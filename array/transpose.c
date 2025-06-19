#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,r,c;
    printf("Enter your row number : ");
    scanf("%d",&r);
    printf("Enter your column number : ");
    scanf("%d",&c);
    int arr[r][c];

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter your arr[%d][%d] element : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int arr1[c][r];
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            arr1[i][j] = arr[j][i];
        }
        printf("\n");
    }
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}