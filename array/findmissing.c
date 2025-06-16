#include<stdio.h>
#include<conio.h>
int main(){
    int i,me //me means missing number.
    int arr[99];
    int sum = 0;
    int sum2 = 100*(100+1)/2;

    for(i=0;i<99;i++){
        printf("Enter your %d element : ",i+1);
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }

    int me = sum2 - sum;
    printf("missing number is => %d",me);

    return 0;
}