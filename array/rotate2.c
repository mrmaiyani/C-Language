#include<stdio.h>
#include<conio.h>
void rev(int x[],int si,int ei){  //int si = starting index and ei = ending index
    for(int i = si,j = ei;i<j;i++,j--){
        int temp = x[i];
        x[i]= x[j];
        x[j]= temp;
    }
}
int main(){
    int x[5]={1,2,3,4,5};
    int n = 5;
    int a = 3;

    a = a % n;
    rev(x,0,n-1);
    rev(x,0,a-1);
    rev(x,a,n-1);
    for(int i = 0;i<=4;i++){
        printf("%d",x[i]);
    }
    
    return 0;
}
