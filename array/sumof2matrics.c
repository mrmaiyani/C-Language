#include<stdio.h>
#include<conio.h>
int main(){
    int i,j;
    int arr[3][3] = {{1,2,3},{3,4,5},{5,6,7}};
    int arr1[3][3] = {{1,2,3},{3,4,5},{5,6,7}};
    int add[3][3];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            add[i][j] = arr[i][j] + arr1[i][j];
        }
    }

     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }

    return 0;
}