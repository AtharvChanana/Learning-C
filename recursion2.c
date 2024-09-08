#include<stdio.h>
int sum_n(int);
int sum_n(int n){
    if (n==1 || n==0)
    {
        return 1;
    }
    return sum_n(n-1) + n;
}
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    printf("sum of first %d natural numbers is %d\n",n,sum_n(n));
    return 0;
    }
