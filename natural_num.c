#include<stdio.h>
int main(){
    int n,i=1,sum=0;
    printf("please enter a number :");
    scanf("%d",&n);
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("sum of first %d natural number is %d",n,sum);
    return 0;
}
