#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,n;
    printf("Enter the number of row and column: ");
    scanf("%d",&n);
    int arr[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter your arr[%d][%d] element : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}