#include<stdio.h>
#include<conio.h>
int main(){
    int r,c,i,j;
    printf("enter your row number: ");
    scanf("%d",&r);
    printf("enter your column number: ");
    scanf("%d",&c);
    int arr[r][c];
    int max = -1;

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("enter your arr[%d][%d] element : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(max<arr[i][j])
            max = arr[i][j];
        }
    }
    printf("ypur max value element is %d",max);

    return 0;
}