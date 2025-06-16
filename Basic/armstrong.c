/* wap to print armstrong numbers out of all between 1 to 500 */
#include<stdio.h>
#include<conio.h>
int main() {
    int lastdigit;
    int i,n;
    int sum;

    printf("armstrong numbers between 1 to 500: ");

    for(i=1; i<=500; i++) {
        n=i;
        sum=0;

        while(n!=0) {
            lastdigit=n%10;
            sum +=lastdigit * lastdigit * lastdigit;
            n=n/10;
        }
        if(sum == i)
            printf("%d\n",i);
    }
    return 0;
}