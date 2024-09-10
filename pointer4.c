#include<stdio.h>
void sum(int*,int*);
void sum(int* a,int* b){
    *a + *b;
}
void avg(int*,int*);
void avg(int* a,int* b){
    ( *a + *b )/ 2;
};
int main(){
    int a=24,b=10;
    sum(&a,&b);
    avg(&a,&b);
    printf("the average of a and b is %d",)
}
