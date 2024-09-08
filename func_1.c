#include<stdio.h>

int sum(int,int);//this is function prototype.

int sum(int x,int y){
    printf("the sum is %d\n",x+y);
    return x+y;
}
int main(){
    sum(12,89);
    sum(1,2);
    sum(1,2);
    sum(1110989,20089);
    return 0;
}
