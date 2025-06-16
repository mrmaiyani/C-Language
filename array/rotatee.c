#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,n;
    printf("enter your array's size: ");
    scanf("%d",&n);
    int x[n];
    int a;
    printf("Enter your A step : ");
    scanf("%d",&a);

    for(i=0;i<=n-1;i++){
        printf("\nEnter your element of %d index : ",i+1);
        scanf("%d",&x[i]);
    }
    a = a % n; //jyare a moto hoy tyare teno ratation time ghatadva

    for(i=n-a;i<=n-1;i++){
        printf("%d",x[i]);
    }
    for(i=0;i<=(n-1)-a;i++){
        printf("%d",x[i]);
    }
    return 0;
}