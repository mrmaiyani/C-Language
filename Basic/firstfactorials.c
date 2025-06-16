/* wap to print a factorials first number of 'n' */
#include<stdio.h>
#include<conio.h>
int main(){
int n,i;
int fact = 1;
printf("enter your number n : ");
scanf("%d",&n);

for(i=1;i<=n;i++){
    fact = fact * i;
    printf("your factorials number is %d\n",fact);
    }


return 0;
}