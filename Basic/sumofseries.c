#include<stdio.h>
#include<conio.h>
int main(){
int n,i;
int sum = 0;
printf("enter your number n : ");
scanf("%d",&n);

for(i=1;i<=n;i++){
    if(i%2!=0)
    sum = sum + i;
    else sum = sum - i;
    }

printf("your sum is :- %d",sum);
return 0;
}