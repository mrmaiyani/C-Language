/* wap to print this pattern:
A B C D
A B C D
A B C D
A B C D
#include<stdio.h>
#include<conio.h>
int main(){
int i,j,n;
printf("Enter your number:- ");
scanf("%d",&n);

for(i=1;i<=n;i++){
    for(j=65;j<=65+n-1;j++){
    printf("%c ",j);
    }
    printf("\n");
}    

return 0;
}
*/

//METHOD 2:
#include<stdio.h>
#include<conio.h>
int main(){
int i,j,n;
printf("Enter your number:- ");
scanf("%d",&n);

for(i=1;i<=n;i++){
    int a = 1;
    for(j=1;j<=n;j++){
    printf("%c ",a+64);
    a++;
    }
    printf("\n");
}    

return 0;
}
