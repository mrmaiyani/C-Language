#include<stdio.h>
#include<conio.h>
int main(){
    int a[5];
    int i;

    for(i=0;i<=4;i++){
        printf("\nEnter your element of %d index : ",i+1);
        scanf("%d",&a[i]);
    }

    for(i=4;i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}