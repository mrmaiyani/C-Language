/* wap to print this pattern:
A
1 2
A B C
1 2 3 4
A B C D E
*/
#include<stdio.h>
#include<conio.h>
int main(){
int i,n,j;
printf("Enter your number : ");
scanf("%d",&n);

for(i=65;i<=64+n;i++){
    for(j=65;j<=i;j++){
    if(i%2==0)
    printf("%c ",j);
    else 
    printf("%d ",j-64);
    }
    printf("\n");
    
}   

return 0;
}