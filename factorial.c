#include<stdio.h>
int main(){
    int n;
    int product=1;
    printf("please enter a number :");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++){
        product = product*i;
    }
    printf("the factorial of %d is %d",n,product);
    return 0;
}
