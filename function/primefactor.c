#include<stdio.h>
#include<conio.h>
void factor(int n){
    int i;
    printf("prime factor of %d are : ",n);
    for(i=2;i<=n;i++){
        while(n % i == 0){
            printf("%d ",i);
            n = n / i;
        }
    }
    printf("\n");
    return;
}
int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);

    if(n >= 0){
        factor(n);
    }
    else{
        printf("your number is not positive integer!please give positive number.");
    }
    return 0;
}