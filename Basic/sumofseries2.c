#include<stdio.h>
#include<conio.h>
int main(){
int n,i;
int sum = 0;
printf("enter your number n : ");
scanf("%d",&n);

if(n%2==0){
    sum=-n/2;
    }
    else{
    sum=-n/2 + n;
    }

printf("your sum is :- %d",sum);
return 0;
}