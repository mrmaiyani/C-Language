#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int x = 3;
    int index = -1;
    bool check = false;
    for(int i = 0;i<=4;i++){
        if(arr[i]==x){
            check = true;
            index = i;
            break;
        }
    }
    if(check == false){
        printf("%d isn't available in the array.",x);
    }
    else{
        printf("%d is available in the array and index is %d .",x,index);
    }
    return 0;
}