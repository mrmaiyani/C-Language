#include<stdio.h>
#include<conio.h>
int main(){
    int i,n;
    printf("Enter your size of array: ");
    scanf("%d",&n);
    int arr[n];
    int product = 1;

    for(i = 0;i <= n-1;i++){
        printf("Enter your %d element : ",i+1);
        scanf("%d",&arr[n]);
    }
    for(i = 1;i <= n;i++){
        product = product * i;
    }
    printf("your product value is now: %d",product);
    return 0;
}