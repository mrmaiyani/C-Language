#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter the size of your array: ");
    scanf("%d",&n);
    int arr[n];
    int i;

    for(i=0;i<=n-1;i++){
        printf("Enter your %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    int max = arr[0];  // only positive number j array ma store karvana hoy to best:max = 0;

    for(i=0;i<=4;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("your array's max value is: %d",max);    
    
    return 0;
}