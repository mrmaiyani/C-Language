/* print this pattern :
1234
123
12
1
*/
#include<stdio.h>
#include<conio.h>
int main(){
int i,j,n;
printf("Enter your number:- ");
scanf("%d",&n);

for(i=1;i<=n;i++){
    for(j=1;j<=n+1-i;j++){
    printf("%d",j);
    }
    printf("\n");
}    

return 0;
}