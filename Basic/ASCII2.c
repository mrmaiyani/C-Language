/* wap to print ASCII value (Typically, the ascii value ranges from 33 to 127) 
#include<stdio.h>
#include<conio.h>

int main(){
int i;

for(i=33;i<=127;i++){
    printf("%d ",i);
    char x=(char)i; //this is calling type casting
    printf("%c\n",x);
    }

return 0;
}      */

//easy method:-
#include<stdio.h>
#include<conio.h>

int main(){
int i;

for(i=33;i<=127;i++){
    printf("%c %d\n",i,i);
    }
return 0;
}    