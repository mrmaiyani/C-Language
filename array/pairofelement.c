#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,pair = 0;
    int a = 5;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    for(i=0;i<=9;i++){
        for(j=1;j<=9;j++){
            if(arr[i] + arr[j] == a){
                pair++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("%d",pair);
    return 0;
}