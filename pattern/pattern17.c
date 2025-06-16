/* wap to print this pattern:
       A
      ABC
     ABCDE
    ABCDEFG
    */
#include<stdio.h>
#include<conio.h>

int main()
{
int i,n,j,k;
printf("Enter your number: ");
scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
        printf("  ");
        }
        for(k=65;k<=(64+i)+i-1;k++){
        printf("%c ",k);
        
        }
    printf("\n");    
    }    
    return 0;
}