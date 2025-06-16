#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter your array's size : ");
    scanf("%d",&n);
    int arr[n];
    int i,x,count = 0;

    for(i=0;i<=n-1;i++){
        printf("Enter your %d element : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("which number's greater number you want? ");
    scanf("%d",&x);

    for(i=0;i<=n-1;i++){
       if(x < arr[i]){
        count = count + 1;
       }
    }
    printf("%d element is greater than your number!!",count);
    return 0;
}