#include<stdio.h>
int fibonacci(int);
int fibonacci(int n){
    if (n==1||n==2){
        return n-1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int  n;
    printf("enter the position :");
    scanf("%d",&n);
    printf("element with number %d in fibonacci series is %d",n,fibonacci(n));
    return 0;
}
