#include <stdio.h>
#include <conio.h>

int main() {
    int i, j, k, r1, c1, r2, c2;

    printf("Enter row number for first matrix: ");
    scanf("%d", &r1);
    printf("Enter column number for first matrix: ");
    scanf("%d", &c1);

    printf("Enter row number for second matrix: ");
    scanf("%d", &r2);
    printf("Enter column number for second matrix: ");
    scanf("%d", &c2);

    int arr[r1][c1];
    int arr1[r2][c2];
    int arr2[r1][c2];
    
    printf("ENter elements for first matrix:\n");
    for (i=0;i<r1;i++){
        for (j =0;j<c1;j++) {
            printf("enter your arr[%d][%d] element : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("Enter elements for second matrix:\n");
    for (i=0;i<r2;i++){
        for (j=0;j<c2;j++){
            printf("enter your arr1[%d][%d] element : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    for (i=0;i<r1;i++){
        for (j=0;j<c2;j++){
            arr2[i][j]= 0;
        }
    }

    for (i=0;i<r1;i++){
        for (j=0;j<c2;j++){
            for(k=0;k<c1;k++){
                arr2[i][j] += arr[i][k] * arr1[k][j];
            }
        }
    }
    
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
