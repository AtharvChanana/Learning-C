#include<stdio.h>
void multiplied_by_30(int*);
void multiplied_by_30(int* a){
    *a = *a * 30;    
}
int main(){
    int a =56;
    printf("the value of a is %d\n",a);
    multiplied_by_30(&a);
    printf("the value of a 30 times is %d",a);
    return 0;
}
