#include<stdio.h>
#include<conio.h>
int main(){
int n;
int lastdigit = 0;
int r = 0;
int sum=0;
printf("enter your digit :- ");
scanf("%d",&n);
int s = n;
while(n!=0){
    lastdigit = n%10;
    n = n/10;
    r = r * 10 + lastdigit;
    }
sum = s + r;  
printf("your digit is %d\n",r);
printf("your sum is %d",sum);
return 0;
}