#include<stdio.h>
double average(int,int,int);
double average(int a,int b,int c){
    return (a+b+c)/3.0;
}
int main(){
    int a,b,c;
    printf("enter number 1 :");
    scanf("%d",&a);

    printf("enter number 2 :");
    scanf("%d",&b);

    printf("enter number 3 :");
    scanf("%d",&c);
    printf("the average of the numbers is %f",average(a,b,c));
    return 0;
}
