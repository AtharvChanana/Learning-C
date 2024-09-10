#include<stdio.h>
int main(){
    int i =5;
    int* ptr = &i;
    printf("the address of i is %u\n",&i);
    printf("the address of i is %u\n",ptr);
    ptr++;
    printf("the value of ptr is %d\n",ptr);
    return 0;
}
