#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,pd = 1;
    printf("Enter your array's size: ");
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<=n-1;i++){
        printf("enter your %d element: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<=(n-1)/2;i++){
        if(arr[i] != arr[n-i-1]){
            pd = 0;
            break;
        }
    }

    if(pd){
        printf("the array is a palindrome.\n");
        }
    else{
            printf("the array is not a palindrome,\n");
        }
    
    return 0;
}