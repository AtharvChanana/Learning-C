#include<stdio.h>
int main(){
    int i=10;
    int* j =&i;//j is a pointer pointing to i
    int k =72;
    printf("the address of %d is %p\n",i,&i);
    printf("the address of %d is %p\n",i,j);
    printf("the address of %d is %p\n",k,&k);

    printf("the value at address k is %d\n",*&k);
    printf("the value at address j is %d\n",*j);
    return 0;
}
