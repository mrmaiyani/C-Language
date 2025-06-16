/* wap to print a fibonacci first number of 'n' */
#include<stdio.h>
#include<conio.h>
int main(){
int n,i;
int a = 1;
int b = 1;
int sum = 0;
printf("enter your number n : ");
scanf("%d",&n);

for(i=1;i<=n;i++){
    sum = a + b;
    a = b;
    b = sum;
    printf("your fibonacci number is %d\n",sum);
    }


return 0;
}