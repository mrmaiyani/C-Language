#include<stdio.h>
#include<conio.h>
int main(){
    int i,n;
    printf("Enter the size of your array: ");
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    
    for(i=0;i<=n-1;i++){
        printf("Enter your %d element: ",i+1);
        scanf("%d",&arr[n]);
    }
    for(i=0;i<=n;i++){
        sum = sum + i;
    }
    printf("your sum is now: %d",sum);
    return 0;
}