#include<stdio.h>
float fahrenheit(int);
float fahrenheit(int c){
    return c*9/5.0 + 32;
}
int main(){
    int c;
    printf("enter temperature in celcius :");
    scanf("%d",&c);

    printf("temperature in fahrenheit is %f",fahrenheit(c));
    return 0;
}
