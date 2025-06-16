#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("enter your array's size : ");
    scanf("%d",&n);
    printf("\n");
    int arr[n];
    int i,add=0,mul=1;

    for(i=0;i<=n-1;i++){
        printf("Enter your %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("New array set is : \n");

    for(i=0;i<=4;i++){
        mul = 0;
        add = 0;
        if(i%2!=0){
            mul = arr[i] * 2;
            printf("%d ",mul);
        }
        else{
            add = arr[i] + 10;
            printf("%d ",add);
        }
    }
    printf("\n");
    return 0;
}