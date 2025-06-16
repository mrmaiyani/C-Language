#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,n;
    printf("Ente the size of the array: ");
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<=n-1;i++){
        printf("Enter your %d element: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<=n-1;i++){
        for(j = i+1;j <= n-1;j++){
            if(arr[i] == arr[j]){
                printf("%d",arr[i]);
                break; // ak j var hit thay te mate.
            }
        }
    }
    return 0;
}