/* que:- wap to print sum of only even/odd number */
// name:- ruchi 
// group:- atulya

#include<stdio.h>
#include<conio.h>

int main(){
int n;
int LastDigit = 0;
int sum = 0;
printf("enter your number :- ");
scanf("%d",&n);

while(n!=0){
    LastDigit=n%10;
    if(LastDigit%2==0){ // odd:- LastDigit%2!=0 //
    sum=sum+LastDigit;
    }
    n=n/10;
    }
printf("your digit sum is %d",sum);    


return 0;
}