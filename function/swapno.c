// swap number using function: 
#include<stdio.h>
#include<conio.h>
void swap(int* x,int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main(){
    int a,b;
    printf("Enter your first number: ");
    scanf("%d",&a);
    printf("Enter your second number: ");
    scanf("%d",&b);
    swap(&a,&b);

    printf("swap value of a is = %d \n",a);
    printf("swap value of b is = %d ",b);

    return 0;
}

