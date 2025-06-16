#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,k,pair = 0;
    int a = 10;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    for(i=0;i<=9;i++){
        for(j=1;j<=9;j++){
            for(k=2;k<=9;k++){
                if(arr[i] + arr[j] + arr[k] == a){
                    pair++;
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("%d",pair);
    return 0;
}