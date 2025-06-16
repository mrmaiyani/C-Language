#include<stdio.h>
#include<conio.h>
int main(){
int n;
int lastdigit = 0;
int r = 0;
printf("enter your digit :- ");
scanf("%d",&n);

while(n!=0){
    lastdigit = n%10;
    n = n/10;
    r = r * 10 + lastdigit;
    }
printf("your digit is %d",r);
return 0;
}