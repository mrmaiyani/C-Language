/* print this pattern :
1
13
135
1357
*/
#include<stdio.h>
#include<conio.h>
int main(){
int i,j,n;
printf("Enter your number:- ");
scanf("%d",&n);

for(i=1;i<=n;i++){
    int a = 1;
    for(j=1;j<=i;j++){
    printf("%d",a);
    a=a+2;
    }
    printf("\n");
}    

return 0;
}