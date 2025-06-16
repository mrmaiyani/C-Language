#include<stdio.h>
#include<math.h>

int main(){
    int a,b,power;
    printf("Enter your number of a : ");
    scanf("%d",&a);
    printf("Enter your number of b : ");
    scanf("%d",&b);
    power= pow(a,b);
    printf("your power is : %d",power);

    return 0;
}