#include<stdio.h>
#include<conio.h>
int main(){
    int i,n,difference;
    int soe = 0;  
    int soo = 0;  
    printf("Enter your array's size: ");
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<=n-1;i++){
        printf("Enter your %d element: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<=n-1;i++){
        if(i%2!=0){
            soo = soo + arr[i];
        }
        else{
            soe = soe + arr[i];
        }
    }
    difference = soe - soo;
    printf("difference between sum of even index and sum of odd index is : %d",difference);
    return 0;
}