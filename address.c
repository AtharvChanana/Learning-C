#include<stdio.h>
int main(){
    int i=10;
    int* j=&i;
    printf("the address of i is %p\n",&i);
    printf("the value of i is %d\n",*j);
    return 0;
}
