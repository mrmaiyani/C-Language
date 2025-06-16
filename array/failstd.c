#include<stdio.h>
#include<conio.h>
int main(){
    int marks[15];
    int i;

    for(i=0;i<=14;i++){
        printf("\nEnter your %d element : ",i+1);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<=14;i++){
        if(marks[i] <= 35)
        printf("your fail student index is %d \n",i);
    } 
    
    return 0;
}